CC = clang
GC = g++

CFLAGS = -c -std=c++11 -Wall -Werror -pedantic
LFLAGS = -std=c++11 -Wall -Werror 

OBJS = sorted_array.o main.o
PROG = main

default: $(PROG)

$(PROG): $(OBJS)
	$(GC) $(LFLAGS) $(OBJS) -o $(PROG)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main.o

sorted_array.o: priority_queue.h sorted_array.h sorted_array.cpp
	$(CC) $(CFLAGS) sorted_array.cpp -o sorted_array.o

binary_tree.o: priority_queue.h binary_tree.h binary_tree.cpp
	$(CC) $(CFLAGS) binary_tree.cpp -o binary_tree.o

real_clean:
	rm -f *.exe
	rm -f *.o
