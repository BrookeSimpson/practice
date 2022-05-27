program11.exe: program11.o stack.o
	gcc -o program11.exe program11.o stack.o

program11.o: program11.c stack.h
	gcc -c program11.c
	
stack.o: stack.c stack.h
	gcc -c stack.c