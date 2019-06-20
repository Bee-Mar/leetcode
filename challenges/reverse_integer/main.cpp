#include <cmath>
#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  int reverse(int x) {

    int digits(std::floor(std::log10(std::abs((double)x)) + 1));

    if (digits <= 1) { return x; }

    int tempX(x), result(0), currPlace(1);

    while (digits--) {
      const int currDigits(std::pow(static_cast<double>(10), static_cast<double>(digits)));
      result += ((tempX / currDigits) * currPlace);
      tempX %= currDigits;
      currPlace *= 10;
    }

    return result;
  }
};

int main() {

  Solution solution;

  std::vector<int> vec = {100002};

  using std::cout;
  using std::endl;

  for (int val : vec) {
    const int result(solution.reverse(val));

    cout << "Original: " << val;
    cout << " -> ";
    cout << "Reversed: " << result << endl;
  }

  return 0;
}
