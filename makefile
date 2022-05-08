floyd: floyd.o helpers.o
	clang -Wall -pedantic -std=c99 floyd.o helpers.o -o floyd

floyd.o: floyd.c floyd.h
	clang -Wall -pedantic -std=c99 -c floyd.c -o floyd.o

helpers.o: helpers.c floyd.h
	clang -Wall -pedantic -std=c99 -c helpers.c -o helpers.o

clean:
	rm *.o
