all:a.out

CC=g++
CPPFLAGS=-Wall -std=c++11 -ggdb
LDFLAGS=-pthread

a.out:main.o
	$(CC) $(LDFLAGS) -o $@ $^

main.o:main.cpp
	$(CC) $(CPPFLAGS) -o $@ -c $^


.PHONY:
	clean

clean:
	rm *.o a.out

