%{
#include "y.tab.h"
//extern int yylval;
%}
%%
search|select|find|retrieve|get|show 	{ return SELECT; }
all			                    	    { return ALL; }
not                                     { return NOT;}
the                                     { return THE;}
to                                      { return TO;}
data                                    { return DATA;}
null                                    { return NULL1;}
"primary key"                           { return PRIMARY_KEY;}
"foreign key"                           { return FOREIGN_KEY;}
about			     	                { return ABOUT;}
from                                    { return FROM;}
add                                     { return ADD;}
create			                    	{ return CREATE; }
drop                                    { return DROP;}
clear                                   { return CLEAR;}
delete                                  { return DELETE;}
columns|column                          { return COLUMN;}
database                                { return DATABASE;}
table				                    { return TABLE;}
row                                     { return ROW;}
of				                        { return OF; }
called				                    { return CALLED;}
a|an|that|the			                { return ARTICLE; }
contains			                    { return CONTAINS;}
text				                    { return VARCHAR;}
"floating point number"		            { return FLOAT;}
number				                    { return INT;}
boolean				                    { return BIT;}
"date and time"|"time and data"	        { return DATETIME;}
and				                        { return AND; }
with				                    { return WITH; }
ordered|sorted			                { return ORDERED;}
by				                        { return BY;}
ascending			                    { return ASCENDING;}
descending			                    { return DESCENDING;}
[0-9]*				                    { yylval.s = strdup(yytext); return INTEGER;}
"greater than"|">"		                { return GREATER_THAN;}
"less than"|"<"		   	                { return LESS_THAN; }
"equals with"|"="		                { return EQUALS_WITH; }
"at least"|">="			                { return AT_LEAST;}
"at most"|"<="			                { return AT_MOST; }
([A-Z][a-z]+[ ]?)+([A-Z][a-z]+)*        { yylval.s = strdup(yytext); return NAME;}
[a-z0-9A-Z_-]+			                { yylval.s = strdup(yytext); return TEXT; }
[ \t\n]          	                   	;
[;:,\.]         			            { return yytext[0];}
.				                        yyerror("Unknown character");
