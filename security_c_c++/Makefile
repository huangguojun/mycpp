OBJS = main.o  
LIBS = 
a.out: $(OBJS)
	gcc -o a.out $(OBJS) $(LIBS) 
main.o: main.c  
	gcc -c main.c -o main.o $(LIBS)
clean:
	rm a.out $(OBJS)
	
