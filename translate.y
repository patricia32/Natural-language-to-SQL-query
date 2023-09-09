%{
#include <stdio.h>
#include <string.h>
extern void yyerror(char *s);
char* ops(char *v1, char *v2, char *v3);
int variables[] = {};
int current;
char* process_table_name(char* text);
char* construct_list(char* text1, char* text2);
char* construct_select(char* select, char* from);
char* construct_where(char* text1, char* comparing, char* text2);
char* construct_nested_select(char* text1, char* text2, char* text3);
%}
%token <s> SELECT OF AND LESS_THAN EQUALS_WITH GREATER_THAN AT_LEAST AT_MOST ABOUT CREATE TABLE CONTAINS DELETE CLEAR ROW DATA THE ADD TO 
%token <s> TEXT ALL WITH ARTICLE NAME ORDERED BY ASCENDING DESCENDING CALLED VARCHAR INT FLOAT BIT DATETIME DATABASE DROP NOT NULL1 FROM COLUMN
%token <s> INTEGER PRIMARY_KEY FOREIGN_KEY
%type  <s> statement  
%type  <s> text columns manyColumns whereClause comparing column_title orderClause ordering selectClause select create drop data_types field_datatype fields_list 
%type  <s> table_or_db key_type delete_or_drop delete alter select_from nested_select
%union {char *s; int d;}
%%

	/////////////////////////////CREATTTTEEEEE DROP UPDATE ALTER INSERT INTO -- SELECT WHERE (SELECT)!!
			// all .. who have
program 		: program statement  '.'		{ printf("%s;\n", $2);}
				| program error '\n' 			{ yyerrok; }
				| /* NULL */
				;
	
statement		: select
				| create
				| drop
				| delete
				| alter
				;

select 			:  selectClause
				;
		
selectClause 	: select_from whereClause				{ sprintf($$, "%s %s", $1, $2); }
				| select_from whereClause orderClause	{ sprintf($$, "%s %s %s", $1, $2, $3); }  
				| select_from orderClause				{ sprintf($$, "%s %s", $1, $2); } 
				| select_from							{ $$ = $1;}
				;

select_from		: SELECT columns text 					{ $$ = construct_select($2, $3);}
				;
	 	
create			: CREATE ARTICLE TABLE CALLED TEXT ARTICLE CONTAINS fields_list	
						{char rez[500];  char c[500]; sprintf(rez,"CREATE TABLE %s(\n ", $5); strcpy(c, $8); strcat(rez, c); strcat(rez, ")"); $$ = rez;}
				| CREATE TABLE TEXT WITH fields_list	
						{char rez[500];  char c[500]; sprintf(rez,"CREATE TABLE %s(\n ", $3); strcpy(c, $5); strcat(rez, c); strcat(rez, ")"); $$ = rez;}
				| CREATE TABLE TEXT 				  	{char rez[500]; char c[500]; sprintf(rez,"CREATE TABLE %s(\n ", $3); strcat(rez, ")"); $$ = rez;}
				| CREATE ARTICLE DATABASE CALLED TEXT 	{char rez[500]; char c[500]; sprintf(rez,"CREATE DATABASE %s", $5);   $$ = rez;}
				| CREATE DATABASE TEXT 				 	{char rez[500]; char c[500]; sprintf(rez,"CREATE DATABASE %s", $3);    $$ = rez;}
				;

drop 			: delete_or_drop table_or_db TEXT 				 {char rez[500];  char c[500]; sprintf(rez,"DROP %s %s", $2, $3);  $$ = rez;}
				| delete_or_drop table_or_db CALLED TEXT		 {char rez[500];  char c[500]; sprintf(rez,"DROP %s %s", $2, $4);   $$ = rez;}
				| delete_or_drop ARTICLE table_or_db CALLED TEXT {char rez[500];  char c[500]; sprintf(rez,"DROP %s %s", $3, $5);   $$ = rez;}
				;
			
delete			: DELETE ALL ABOUT TEXT					  {char rez[500]; char c[500]; sprintf(rez,"DELETE FROM %s", $4);  $$ = rez;}
				| DELETE ALL FROM TEXT TABLE			  {char rez[500]; char c[500]; sprintf(rez,"DELETE FROM %s", $4);  $$ = rez;}
				| DELETE ALL THE DATA ABOUT TEXT		  {char rez[500]; char c[500]; sprintf(rez,"DELETE FROM %s", $6);  $$ = rez;}
				| DELETE ALL THE DATA FROM TEXT	TABLE	  {char rez[500]; char c[500]; sprintf(rez,"DELETE FROM %s", $6);  $$ = rez;}
				| CLEAR TEXT TABLE						  {char rez[500]; char c[500]; sprintf(rez,"DELETE FROM %s", $2);  $$ = rez;}
				| DELETE TEXT whereClause FROM TEXT TABLE {char rez[500]; char c[500]; sprintf(rez,"DELETE FROM %s %s", $5, $3);  $$ = rez;}
				;



alter 			: ADD COLUMN fields_list TO TEXT TABLE	{char rez[500]; char c[500]; sprintf(rez,"ALTER TABLE %s \nADD %s", $5, $3); $$ = rez;}
				| delete_or_drop COLUMN TEXT FROM TEXT TABLE 	{char rez[500]; char c[500]; sprintf(rez,"ALTER TABLE %s \nDROP COLUMN %s", $5, $3); $$ = rez;}
				;
				
delete_or_drop	: DROP 									{ $$ = "DROP";}
				| DELETE								{ $$ = "DELETE";}
				;

table_or_db		: TABLE	 								{ $$ = "TABLE";}
				| DATABASE 								{ $$ = "DATABASE";}
				;
		
fields_list		: field_datatype ',' fields_list		{ $$ = construct_list($1, $3);}
				| field_datatype AND field_datatype		{ $$ = construct_list($1, $3);}
				| field_datatype						{ $$ = construct_list($1, "");}
				;

field_datatype	: key_type TEXT data_types				{ char rez[70]=""; strcat(rez, $2); strcat(rez, " "); strcat(rez, $3); strcat(rez, " NOT NULL"); strcat(rez, $1); $$ = rez;}
				| TEXT data_types NOT NULL1 key_type	{ char rez[70]; strcpy($$, $1); strcat($$, " "); strcat($$, $2); strcat($$, " NOT NULL"); strcat($$, $5);}
				| TEXT data_types NOT NULL1 TEXT TEXT key_type	{ char rez[50]; strcpy($$, $1); strcat($$, " "); strcat($$, $2); strcat($$, " NOT NULL"); strcat($$, $7);}
				| TEXT data_types NOT NULL1				{ char rez[50]; strcpy($$, $1); strcat($$, " "); strcat($$, $2); strcat($$, " NOT NULL");}
				| TEXT data_types 						{ char rez[50]; strcpy($$, $1); strcat($$, " "); strcat($$, $2);}
				;

key_type		: PRIMARY_KEY							{ $$ = " PRIMARY KEY";}
				| FOREIGN_KEY							{ $$ = " FOREIGN_KEY";}
				;

data_types		: INT 									{ $$ = "INT";}
				| FLOAT									{ $$ = "FLOAT";}
				| DATETIME								{ $$ = "DATETIME";}
				| VARCHAR								{ $$ = "VARCHAR(255)";}
				| BIT									{ $$ = "BIT";}
				;
	 
whereClause		: WITH ARTICLE TEXT comparing text 		{ $$ = construct_where($3, $4, $5);}
				| WITH TEXT comparing text				{ char str[30]; sprintf(str,"%s", $4); $$ = construct_where($2, $3, str);}
				| WITH TEXT text			{if(strstr($3,"people WHERE name = ")-$3==0)$3=$3+20;char str[30];sprintf(str,"%s",$3);$$=construct_where($2,"=", str);}
				| nested_select
				;

nested_select	: WITH TEXT text whereClause    {puts("1");if(strstr($3,"people WHERE name = ")-$3==0)$3=$3+20;char rez[100]; strcpy(rez, construct_where($2,"=", $3)); $$ = construct_nested_select($2, $3, rez);}
				| WITH TEXT text text	    {puts("2");if(strstr($4,"people WHERE name = ")-$4==0)$4=$4+20;char rez[100]; strcpy(rez, construct_where($3,"=", $4)); $$ = construct_nested_select($2, $3, rez);}
				| WITH TEXT text comparing text whereClause   {puts("3");if(strstr($5,"people WHERE name = ")-$5==0)$5=$5+20;char rez[100]; strcpy(rez, construct_nested_select($5,$4,$6)); $$ = construct_nested_select($2, $3, rez);}
				| WITH TEXT text comparing text  			  {puts("4");if(strstr($5,"people WHERE name = ")-$5==0)$5=$5+20;char rez[100]; strcpy(rez, construct_where($3,$4,$5)); $$ = construct_nested_select($2, $3, rez);}
				;

orderClause     : ORDERED ordering BY TEXT 				{ strcpy ($$, "ORDER BY "); strcat($4, $2); strcat($$, $4);}
				| ORDERED BY TEXT 						{ strcpy ($$, "ORDER BY "); strcat($$, $3); }
				;

ordering		: DESCENDING 							{ $$ = " DESC";}
				| ASCENDING 							{ $$ = " ASC";}
				;

comparing		: LESS_THAN								{ $$ = "<";}
				| EQUALS_WITH							{ $$ = "=";}
				| GREATER_THAN							{ $$ = ">";}
				| AT_LEAST								{ $$ = ">=";}
				| AT_MOST								{ $$ = "<=";}
				;
		
columns 		: ALL ABOUT								{ $$ = "*";}
				| manyColumns OF 
				| manyColumns OF ALL 
				;

manyColumns 	: column_title ',' manyColumns 			{ $$ = construct_list($1, $3);}
				| column_title AND column_title			{ $$ = construct_list($1, $3);}
				| column_title 		 					{ $$ = construct_list($1 ,"");}
				;
	    	
column_title	: THE text								{ $$ = $2;}
				| text									{ $$ = $1;} 
				;
	 
text	 		: TEXT		{ strcpy($$, process_table_name($1));}
				| NAME		{ char rez[50]; strcpy(rez, "people WHERE name = '"); strcat(rez, $1);  sprintf(rez,"people WHERE name = '%s'",$1); strcpy($$, rez); }
				| INTEGER	{ $$ = $1;}
				;
%%
char* construct_select(char* select, char* from){
	char* rez = malloc(150*sizeof(char));
	strcpy(rez, "SELECT ");
	strcat(rez, select);
	strcat(rez, " FROM ");
	strcat(rez, from);
	return rez;
}
char* process_table_name(char* text){

	if(strcmp(text, "women") == 0) return "woman";
	if(strcmp(text, "men") == 0) return "man";
	
	if(strstr(text, "es") != NULL){
		int index = strstr(text, "es") - text;
		text[index] = '\0';
		if(text[index -1] == 'i')
			text[index -1 ] = 'y';
	}
	else if(strstr(text, "s") != NULL)
		text[strstr(text, "s") - text] = '\0';
		
	return text;
}

char* construct_list(char* text1, char* text2){
	if(strcmp(text2, "") != 0)
		strcat(text1, ", ");
	strcat(text1, text2);
	return text1;
}

char* construct_where(char* text1, char* comparing, char* text2){
	
	char rez[100];
	strcpy(rez, "WHERE ");
	strcat(rez, text1);
	strcat(rez, " ");
	strcat(rez, comparing);
	strcat(rez, " ");
	strcat(rez, text2);
	strcpy(text1, rez);
	return text1;
}

char* construct_nested_select(char* text1, char* text2, char* text3){
	char rez[150];
	strcpy(rez, "WHERE ");
	strcat(rez, text1);
	strcat(rez, "_id =");
	strcat(rez, " (SELECT id FROM ");
	strcat(rez, text1);
	strcat(rez, " ");
	strcat(rez, text3);
	strcat(rez,")");
	strcpy(text1, rez);
	return text1;
}
int main(){
	yyparse();
	return(1);
}



// SELECT

// show all about Ion.
// show the name and the age of Ion.
// show name and age of Ion.
// show name, brothers and age of Ion.
// show the age of all men with name Ion.
// show all about men with name Ion.

// show all about women with name Ana ordered by age.
// show name of all women ordered by name.
// show all about women with age at least 34 sorted descending by name.
// show the name of all women with age 34 sorted ascending by salary.

// NESTED SELECT
// show all about people with college name Utcn.
// show the name of girls with job location Cluj.
// show the name of all women with salary mean greater than 20000.
// find all about people with college name Utcn.
// find all about people with college technical with name Utcn.
// find the name of women with salary mean greater than people with salary 30000.



// CREATE

// create a table called people that contains name text not.
// create a table called people that contains name text and age number.
// create a table called people that contains name text, job text, salary number and date date and time.
// create table people.
// create table people with age number, name text.
// create a table called people that contains name text and age number not null.
// create table people with id number not null which is primary key.
// create table people with id number not null primary key.
// create table people with primary key id number.
// create table people with primary key id number and name text.
// create table people with primary key id number, name text.
// create table people with primary key id number and col text not null.
// create table people with primary key id number and col text not null foreign key.

// create the database called d.
// create a database called d.
// create database s.



// DROP

// delete database testDB2.
// drop the database called ed.
// delete table men.


// 	DELETE
// delete all about people.
// delete girls with age 34 from people table.
// delete girls with age greater than 18 from children table.
// clear men table.
// delete all the data about people.
// delete all the data from people table.

// ALTER
// add column age number to people table.
// add columns price number and release_date date and time to books table.
// drop column age from people table.










