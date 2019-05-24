#include <iostream>
#include <vector>

class Queue {
private:
  std::vector<int> queue;
  int head;

public:
  Queue() { head = 0; }
  ~Queue() {}

  bool enqueue(int value) {
    queue.push_back(value);
    return true;
  }

  int first() { return queue[head]; }

  bool dequeue() {
    if (isEmpty()) {
      return false;
    }

    head++;

    return true;
  }

  bool isEmpty() { return queue.size() == 0; }

  void display() {
    unsigned int i;

    for (i = head; i < queue.size(); i++) {
      std::cout << queue[i] << std::endl;
    }
  }
};

int main() {

  Queue queue;

  std::cout << "Enqueueing" << std::endl;

  queue.enqueue(5);
  queue.enqueue(3);
  queue.enqueue(1);

  queue.display();

  std::cout << "Dequeueing" << std::endl;

  queue.dequeue();
  queue.display();

  queue.dequeue();
  queue.display();

  queue.dequeue();
  queue.display();

  return 0;
}
