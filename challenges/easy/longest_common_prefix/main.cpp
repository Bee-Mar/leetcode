#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    string longestCommonPrefix(vector<string> &strs) {

        if (strs.size() == 0) { return ""; }
        if (strs.size() == 1) { return strs.at(0); }

        char currentChar;
        int j(0);

        while (j < strs.at(0).size()) {
            currentChar = strs.at(0).at(j);

            for (int i = 1; i < strs.size(); i++) {
                if (j >= strs.at(i).size() || strs.at(i).at(j) != currentChar) {
                    return strs.at(0).substr(0, j);
                }
            }

            ++j;
        }

        return strs.at(0).substr(0, j);
    }
};

class RecursiveSolution {
  public:
    string longestCommonPrefix(vector<string> &strs) {
    }
};

int main(int argc, char *argv[]) {

    Solution solution;

    std::vector<std::vector<std::string>> input{
        {"flower", "flow", "flight"}, {"dog", "racecar", "car"}, {"c", "c"}, {}};

    for (auto vec : input) { std::cout << solution.longestCommonPrefix(vec) << std::endl; }

    return 0;
}
