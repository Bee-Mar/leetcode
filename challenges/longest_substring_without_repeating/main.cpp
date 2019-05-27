#include <iostream>
#include <map>
#include <stdio.h>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    if (s.size() <= 1) {
      return s.size();
    }

    unordered_map<char, int> table;
    unordered_map<char, int>::iterator it;

    int i, start = 0, maxLen = 0, currentLen = 0;

    for (i = 0; i < s.size(); i++) {
      if ((it = table.find(s.at(i))) != table.end()) {
        currentLen = i - start;
        maxLen = (currentLen > maxLen) ? currentLen : maxLen;
        start = (it->second + 1);
        it->second = i;

      } else {
        table.insert(pair<char, int>(s.at(i), i));
        currentLen++;
      }
    }

    maxLen = (currentLen > maxLen) ? currentLen : maxLen;
    return maxLen;
  }
};

int main(void) {
  Solution solution;
  int result;

  vector<string> strings = {"abcabcbb", "bbbb", "pwwkew", "aab",
                            "dvdf",     "abba", "ckilbkd"};

  for (int i = 0; i < strings.size(); i++) {
    result = solution.lengthOfLongestSubstring(strings[i]);
    cout << "=========================" << endl;
    cout << "LSS of " << strings[i] << " = " << result << endl;

    cout << "=========================" << endl;
  }

  return 0;
}
