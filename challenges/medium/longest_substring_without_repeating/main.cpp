#include <stdio.h>
#include <iostream>
#include <map>
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

    int i;
    int currentStart = 0, currentEnd = 0;
    int maxStart = 0, maxEnd = 0;

    for (i = 0; i < s.size(); i++) {
      if ((it = table.find(s.at(i))) != table.end()) {
        if (it->second >= currentStart) {
          currentEnd = i - currentStart;

          if (maxEnd < currentEnd) {
            maxEnd = currentEnd;
            maxStart = currentStart;
          }

          currentStart = ++it->second;
        }

        it->second = i;

      } else {
        table.insert(pair<char, int>(s.at(i), i));
      }
    }

    currentEnd = (i - currentStart);
    return (maxEnd < currentEnd) ? currentEnd : maxEnd;
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
