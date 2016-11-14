pid:pid.c
	gcc -o pid pid.c
pid.o:pid.c
	gcc -c pid.c
clean:
	rm *.o pid


