fm: main.o
	cc -lm -o fm main.o 

main.o: main.c
	cc -c main.c 
