#include <iostream>
#include <vector>

class CircularQueue {
private:
  std::vector<int> queue;
  int head, tail, size;

public:
  CircularQueue(int capacity) {
    queue.resize(capacity);
    size = capacity;
    head = tail = -1;
  }

  ~CircularQueue() {}

  bool isEmpty() { return queue.size() == 0; }

  bool enqueue(int value) {

    if ((tail + 1) % size == head) {
      return false;
    }

    if (isEmpty()) {
      head = 0;
    }

    tail = (++tail % size);

    queue[tail] = value;

    return true;
  }

  bool dequeue() {
    if (isEmpty()) {
      return false;
    }

    if (head == tail) {
      head = tail = -1;
    }

    head = (++head % size);

    return true;
  }

  int first() {
    if (isEmpty()) {
      return -1;
    }

    return queue[head];
  }

  int last() {
    if (isEmpty()) {
      return -1;
    }

    return queue[tail];
  }
};

int main() {

  CircularQueue queue(5);

  queue.enqueue(5);

  std::cout << queue.first() << std::endl;
  std::cout << queue.last() << std::endl;

  return 0;
}
