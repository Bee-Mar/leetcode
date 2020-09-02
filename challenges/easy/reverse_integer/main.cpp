#include <iostream>
#include <limits>
#include <vector>

class Solution {
public:
  int reverse(int x) {
    int temp(0), reversed(0);

    while (x) {
      if (reversed > (INT32_MAX / 10) || reversed < (INT32_MIN / 10)) {
        return 0;
      }
      temp = (x % 10);
      x /= 10;
      reversed = reversed * 10 + temp;
    }

    return reversed;
  }
};

int main() {

  Solution solution;

  std::vector<int> vec = {1234, 1534236469};

  using std::cout;
  using std::endl;

  for (int val : vec) {
    const int temp(solution.reverse(val));
    cout << "Original: " << val;
    cout << " -> ";
    cout << "Reversed: " << temp << endl;
  }

  return 0;
}
