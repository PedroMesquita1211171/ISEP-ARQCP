output: main.o asm.o
	gcc -Wall -g main.o asm.o -o output

main.o: main.c main.h
	gcc -Wall -g -c main.c

asm.o: asm.s
	gcc -Wall -g -c asm.s

run: output
	./output
clean:
	rm *.o main
