#include <array>
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
  public:
    bool isValid(string s) {

        std::stack<char> stack;
        std::unordered_map<char, char> paren_pairs{{'(', ')'}, {'[', ']'}, {'{', '}'}};

        int matching_index;
        char closing_paren;

        for (char paren : s) {
            closing_paren = '\0';

            switch (paren) {
            case '(':
                stack.push(paren);
                break;
            case '[':
                stack.push(paren);
                break;
            case '{':
                stack.push(paren);
                break;

            case ')':
                if (!stack.empty() && paren_pairs[stack.top()] == paren) { stack.pop(); }
                break;

            case ']':
                if (!stack.empty() && paren_pairs[stack.top()] == paren) { stack.pop(); }
                break;

            case '}':
                if (!stack.empty() && paren_pairs[stack.top()] == paren) { stack.pop(); }
                break;

            default:
                break;
            }
        }
        return stack.empty();
    }
};

int main() {

    Solution solution;
    vector<string> input{"()", "()[]{}", "(]", "([)]", "{[]}", "([)"};

    for (string parens : input) { cout << solution.isValid(parens) << endl; }

    return 0;
}
