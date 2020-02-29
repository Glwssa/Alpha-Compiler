all: lex , gcc

lex: al.l
	lex --outfile=al.c al.l
gcc: al.c
	gcc -o scanner al.c
clean:
	rm scanner
	rm al.c