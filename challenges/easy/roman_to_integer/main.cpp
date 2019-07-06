#include <iostream>
#include <map>
#include <vector>

class Solution {
  public:
    int romanToInt(std::string s) {
        int result(0), currentValue(0), previousValue(0);

        for (char c : s) {
            switch (c) {
            case 'I':
                currentValue = 1;
                break;
            case 'V':
                currentValue = 5;
                break;
            case 'X':
                currentValue = 10;
                break;
            case 'L':
                currentValue = 50;
                break;
            case 'C':
                currentValue = 100;
                break;
            case 'D':
                currentValue = 500;
                break;
            case 'M':
                currentValue = 1000;
                break;
            default:
                break;
            }

            if (previousValue < currentValue) { result += -(previousValue << 1); }

            result += currentValue;
            previousValue = currentValue;
        }

        return result;
    }
};

int main() {
    std::vector<std::string> romanNumerals{"IV"};

    Solution solution;

    for (std::string romanNumeral : romanNumerals) {
        std::cout << solution.romanToInt(romanNumeral) << std::endl;
    }

    return 0;
}
