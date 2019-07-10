#include <algorithm>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

class Solution {
  public:
    int myAtoi(string str) {
        if (str.size() == 0) { return 0; }

        bool digit_collected{false}, minus_sign_found{false}, plus_sign_found{false};

        string temporary_result("");

        int i{0};

        while (i < str.size() && isspace(str.at(i))) { i++; }

        for (int j = i; j < str.size(); j++) {
            const char current_char{str.at(j)};

            if (isspace(current_char) || current_char == '.' || isalpha(current_char)) { break; }

            if (isdigit(current_char)) {
                temporary_result += current_char;
                digit_collected = true;
                continue;
            }

            if (current_char == '-') {
                if (plus_sign_found || minus_sign_found) {
                    break;

                } else if (!minus_sign_found) {
                    temporary_result += current_char;
                    minus_sign_found = true;
                    continue;
                }
            }

            if (current_char == '+') {
                if (minus_sign_found || plus_sign_found) {
                    break;
                } else {
                    plus_sign_found = true;
                }
            }
        }

        if (!digit_collected) { return 0; }

        int value;

        try {
            value = stoi(temporary_result);
        } catch (std::out_of_range error) {
            return minus_sign_found ? INT32_MIN : INT32_MAX;
        } catch (std::invalid_argument error) { return 0; }

        return value;
    }
};

int main(int argc, char *argv[]) {

    vector<string> input_values{" ",
                                "42",
                                "   -42",
                                "4193 with words",
                                "words and 987",
                                "-91283472332",
                                "+",
                                "",
                                "   +0 123",
                                "-+1",
                                "- 234",
                                "-5-",
                                "-13+8",
                                "++1",
                                "  -0012a42"};

    Solution solution;

    for (string input : input_values) {
        std::cout << "Input ->  " << input << "  result -> " << solution.myAtoi(input) << std::endl;
    }

    return 0;
}
