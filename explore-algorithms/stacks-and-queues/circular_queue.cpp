#include <iostream>
#include <vector>

class CircularQueue {
private:
  std::vector<int> queue;
  int head, tail, size;

public:
  CircularQueue() {
    queue.resize(5);
    head = tail = -1;
  }

  ~CircularQueue() {}

  bool isEmpty() { return queue.size() == 0; }

  bool enqueue(int value) {

    if ((tail - head) == queue.size()) {
      return false;
    }

    if (isEmpty()) {
      head = 0;
    }

    tail = (++tail % queue.size());

    queue[tail] = value;

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

  bool dequeue() {
    if (isEmpty()) {
      return false;
    }

    if (head == tail) {
      head = tail = -1;
    }

    head = (++head % queue.size());

    return true;
  }
};

int main() {

  CircularQueue queue;

  queue.enqueue(5);

  std::cout << queue.first() << std::endl;
  std::cout << queue.last() << std::endl;

  return 0;
}
