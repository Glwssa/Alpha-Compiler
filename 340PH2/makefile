all: lex , bison , gcc

lex: al.l
	lex --outfile=al.c al.l
bison: parser.y
	bison --yacc --defines --output=parser.c parser.y
gcc: al.c parser.c Table.h
	gcc -o scanner al.c parser.c Table.h
clean:
	rm scanner
	rm al.c
	rm parser.c
	rm parser.h