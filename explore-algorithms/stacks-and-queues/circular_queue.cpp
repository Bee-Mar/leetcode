#include <iostream>
#include <vector>

class CircularQueue {
private:
  std::vector<int> queue;
  int head, tail;

public:
  CircularQueue() { head = tail = 0; }
  ~CircularQueue() {}
};

int main() { return 0; }
