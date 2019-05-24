#include <iostream>
#include <vector>

class CircularQueue {
 private:
  std::vector<int> queue;
  int head, tail, size;

 public:
  CircularQueue(int capacity) {
    head = tail = -1;
    size = capacity;

    queue.resize(capacity);
  }

  ~CircularQueue() {}

  inline bool isEmpty() { return head == -1; }

  inline bool isFull() { return ((tail + 1) % size) == head; }

  int last() {
    if (isEmpty()) {
      return -1;
    }

    return queue[tail];
  }

  int first() {
    if (isEmpty()) {
      return -1;
    }

    return queue[head];
  }

  bool enqueue(int value) {
    if (isFull()) {
      return false;
    }

    if (isEmpty()) {
      head = 0;
    }

    tail = (tail + 1) % size;

    queue[tail] = value;
    return true;
  }

  bool dequeue() {
    if (isEmpty()) {
      return false;
    }

    if (head == tail) {
      head = tail = -1;
      return true;
    }

    head = (head + 1) % size;

    return true;
  }
};

int main() {
  CircularQueue queue(3);

  std::cout << queue.enqueue(1) << std::endl;
  std::cout << queue.enqueue(2) << std::endl;
  std::cout << queue.enqueue(3) << std::endl;
  std::cout << queue.enqueue(4) << std::endl;
  std::cout << queue.last() << std::endl;
  std::cout << queue.isFull() << std::endl;
  std::cout << queue.dequeue() << std::endl;
  std::cout << queue.enqueue(4) << std::endl;
  std::cout << queue.last() << std::endl;

  return 0;
}
