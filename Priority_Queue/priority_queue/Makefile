CC = clang

CFLAGS = -c -std=c++11 -Wall -Werror -pedantic
LFLAGS = -std=c++11 -Wall -Werror 

OBJS = sorted_array.o test.o
PROG = test

default: $(PROG)

$(PROG): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(PROG)

test.o: test.cpp
	$(CC) $(CFLAGS) test.cpp -o test.o

sorted_array.o: priority_queue.h sorted_array.h sorted_array.cpp
	$(CC) $(CFLAGS) sorted_array.cpp -o sorted_array.o

real_clean:
	rm -f *.exe
	rm -f *.o