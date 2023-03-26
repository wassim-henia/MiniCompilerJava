%{
     #include <stdio.h>
     #include <stdlib.h>
     #include <string.h>
     #include "analyse_syntaxique.tab.h"
     #include <math.h>

     #define YYSTYPE char*

     int line = 1;
%}

delim                                   ([ \t]|(" "))
bl                                      {delim}+
bl0                                     {delim}*
numberN                                 [0-9]
numberNN                                [1-9]
lettre                                  [a-zA-Z]
String                                  \"([^"\n]|\"\")+\"

openParentheses                         (\()
closeParentheses                        (\))
openSquareBrackets                      (\[)
closeSquareBrackets                     (\])
openBraces                              (\{)
closeBraces                             (\})
COMMENT_LINE                            "//"

identifier                              ([A-Za-z_][A-Za-z0-9_]*)
integerLiteral                          {numberN}+
booleanLiteral                          "true"|"false"
illegalIdentifier                       {numberN}({lettre}|{numberN})*

dataType                                {primtiveType}|tableType
primtiveType                            "int"|"bool"|"String"|"byte"|"char"|"short"|"long"|"float"|"double"
tableType                               ({primtiveType}{bl}{openSquareBrackets}{bl0}{closeSquareBrackets})

%%

{bl}                                    /* pas d'actions */
"\n"                                    line++;

"public"                                {  return  _PUBLIC;            }
"static"                                {  return  _STATIC;            }
"class"                                 {  return  _CLASS;             }
"void"                                  {  return  _VOID;              }
"main"                                  {  return  _MAIN;              }
"extends"                               {  return  _EXTENDS;           }
"return"                                {  return  _RETURN;            }
"System.out.println"                    {  return  _SOP;               }
"length"                                {  return  _LENGTH;            }
"this"                                  {  return  _THIS;              }
"new"                                   {  return  _NEW;               }

"if"                                    {  return  _IF;                }
"else"                                  {  return  _ELSE;              }
"while"                                 {  return  _WHILE;             }

"int"                                   {  return  _INTEGER;           }
"String"                                {  return  _STRING;            }
{dataType}                              {  return  _DATATYPE;          }

{openParentheses}                       {  return  _OPENPARENT;        }
{closeParentheses}                      {  return  _CLOSEPARENT;       }
{openSquareBrackets}                    {  return  _OPENSQRBRACK;      }
{closeSquareBrackets}                   {  return  _CLOSESQRBRACK;     }
{openBraces}                            {  return  _OPENBRAC;          }
{closeBraces}                           {  return  _CLOSEBRAC;         }

"&&"                                    {  return  _AND;               }
"||"                                    {  return  _OR;                }

"."                                     {  return  _DOT;               }
";"                                     {  return  _SEMICOLON;         }
","                                     {  return  _COMMA;             }
"\""                                    {  return  _DOUBLEQUOTE;       }
"\'"                                    {  return  _SINGLEQUOTE;       }

"+"                                     {  return  _PLUS;              }
"-"                                     {  return  _MINUS;             }
"*"                                     {  return  _MULTIPLY;          }
"!"                                     {  return  _NOT;               }
"="                                     {  return  _EQUAL;             }
"\/"                                    {  return  _DIV;               }

"<"|">"|"<="|">="|"=="|"!="             {  return  _COMPOP;            }



{booleanLiteral}                        {  return  _BOOLVALUE;         }
{integerLiteral}                        {  return  _INTEGERVALUE;      }
{identifier}                            {  return  _IDENT;             }
{String}							{  return _STRINGVALUE;        }
{illegalIdentifier}                     { printf("\nLEXICAL ERROR on character %d (line %d): Illegal Identifier\n\n", yytext[0], line);   }

\/\/.*                                  {   /* skip */   }

"/*"                                    {
                                             int isComment = 1;
                                             char c;
                                             while(isComment) {
                                                  c = input();
                                                  if(c == '*') {
                                                       char ch = input();
                                                       if(ch == '/') isComment = 0;
                                                       else unput(ch);
                                                  }
                                                  else if(c == '\n') line++;
                                                  else if(c == EOF) {
                                                       printf("\nLEXICAL ERROR (line %d): Unterminated comment", line);
                                                       isComment = 0;
                                                  }
                                             }
                                        }

"*\/"                                 {  printf("\nLEXICAL ERROR on character %d (line %d)\n\n", yytext[0], line);   }

.                                     {  printf("\nLEXICAL ERROR on character %d (line %d)\n\n", yytext[0], line);   }

%%

int yywrap()
{
 return(1);
}