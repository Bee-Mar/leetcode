#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> result = {0, 0};

        map<int, int> table;

        unsigned int i;
        int complement;

        for (i = 0; i < nums.size(); i++) {
            complement = target - nums[i];
            table.insert(pair<int, int>(nums[i], i));

            if (table.find(complement) != table.end() && table.at(complement) != i) {
                result[0] = table.at(complement);
                result[1] = i;
                break;
            }
        }

        return result;
    }
};

int main() {

    int target = 6;
    vector<int> nums = {3, 2, 4};

    Solution sol;

    vector<int> result = sol.twoSum(nums, target);

    cout << result[0] << ", " << result[1] << endl;

    return 0;
}
