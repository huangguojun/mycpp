INCLUDES= -I/usr/include
LIBDIR= -L/usr/lib
LIBS= $(LIBDIR) -lm
CFLAGS= -g  -Wall

a.out:main.o
	g++ -o a.out main.o $(LIBS) $(CFLAGS)
main.o: main.cpp
	g++ -c main.cpp $(INCLUDES) $(LIBS) $(CFLAGS)
clean:
	rm *.o a.out

