TARGETS = stack queue circular_queue

all: $(TARGETS)

stack: stack.cpp
	g++ -g -o stack stack.cpp

queue: queue.cpp
	g++ -g -o queue queue.cpp

circular_queue: circular_queue.cpp
	g++ -g -o circular_queue circular_queue.cpp

clean:
	rm -f $(TARGETS)
