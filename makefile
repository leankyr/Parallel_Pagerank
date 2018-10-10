W_FLAGS = -Wall -Wextra -pedantic -fopenmp
output: main.o header.o
	gcc -std=c99 $(W_FLAGS) main.o header.o -o output

main.o: main.c
	gcc -std=c99 $(W_FLAGS) -c main.c

header.o: header.c header.h
	gcc -std=c99 $(W_FLAGS) -c header.c

clean:
	rm *.o 


