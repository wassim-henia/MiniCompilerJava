# Mini Java Compiler
### Run the syntax generator
```
cd MiniCompilateur
flex analyse_lexical.lex 
bison -d analyse_syntaxique.y 
gcc -o app analyse_syntaxique.tab.c lex.yy.c
miniJava.exe <  Exemple2.java
```
### Run the application
```
python main.py
```
