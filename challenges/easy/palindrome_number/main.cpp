#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>

class Solution {
public:
  bool isPalindrome(int x) {
    std::string str(std::to_string((unsigned int)x));
    int end(str.length() - 1), start(0);

    while (start < end) {
      if (str.at(start) != str.at(end)) {
        return false;
      }
      ++start, --end;
    }

    return true;
  }
};

int main(int argc, char *argv[]) {

  if (argc < 2) {
    std::cout << "Input arguments missing." << std::endl;
    exit(-1);
  }

  Solution solution;

  std::cout << (solution.isPalindrome(std::atoi(argv[1])) ? "true" : "false") << std::endl;

  return 0;
}
