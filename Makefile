EXECS = tester
OBJS = Shape.o

CC = g++
CCFLAGS = -std=c++17 -Wall -Wno-deprecated -Werror=return-type -g

all: $(EXECS)

tester: $(OBJS)
	$(CC) $(CCFLAGS) $^ -o $@
%.o: %.cpp *.h
	$(CC) $(CCFLAGS) -c $<
%.o: %.cpp
	$(CC) $(CCFLAGS) -c $<
Rectangle.o: Rectangle.h Rectangle.cpp Shape.cpp Shape.h

clean:
	/bin/rm -f a.out $(OBJS) $(EXECS)
