W_FLAGS = -Wall -Wextra -pedantic -fopenmp
output: main2.o header.o
	gcc -std=c99 $(W_FLAGS) main2.o header.o -o output

main2.o: main2.c
	gcc -std=c99 $(W_FLAGS) -c main2.c

header.o: header.c header.h
	gcc -std=c99 $(W_FLAGS) -c header.c

clean:
	rm *.o 


