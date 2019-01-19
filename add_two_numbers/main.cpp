#include <iostream>
#include <vector>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {

public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int temp;
    ListNode *temp1 = l1;
    ListNode *temp2 = l2;

    std::cout << l1->val << std::endl;
    return l1;
  }
};

int main() {
  Solution sol;
  ListNode *list1 = (struct ListNode *)malloc(sizeof(struct ListNode *));
  ListNode *list2 = (struct ListNode *)malloc(sizeof(struct ListNode *));

  std::vector<int> input1, input2;
  input1 = {2, 4, 3};
  input2 = {5, 6, 4};

  ListNode *temp1 = list1;
  ListNode *temp2 = list2;

  int i = 0;

  while (temp1 && temp2) {
    temp1->val = input1[i];
    temp2->val = input2[i];
    temp1 = temp1->next;
    temp2 = temp2->next;
    i++;
  }

  sol.addTwoNumbers(list1, list2);
  return 0;
}
