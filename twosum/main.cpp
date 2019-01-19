#include <iostream>
#include <map>
#include <vector>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> nums, int target) {
    int i = 0, complement = 0;

    std::vector<int> result;
    std::map<int, int> table;

    for (i = 0; i < nums.size(); i++) {
      table[nums[i]] = i;
    }

    for (i = 0; i < nums.size(); i++) {
      complement = target - nums[i];
      if (table[complement] && table.at(complement) != i) {
        result.push_back(i);
        result.push_back(table.at(target - nums[i]));
        return result;
      }
    }

    result.push_back(0);
    result.push_back(0);
    return result;
  }
};

int main() {

  Solution sol;
  std::vector<int> input = {1, 3, 4, 2};
  std::vector<int> result = sol.twoSum(input, 6);
  std::cout << result[0] << " " << result[1] << std::endl;

  return 0;
}
