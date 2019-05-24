#include <cmath>
#include <iostream>
#include <vector>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {

public:
  void printList(ListNode *list) {
    ListNode *temp = list;
    while (temp->next) {
      std::cout << temp->val << std::endl;
      temp = temp->next;
    }
  }

  ListNode *fillLinkedList(std::vector<int> vals) {
    int i = 0;
    ListNode *list = (struct ListNode *)malloc(sizeof(struct ListNode *));
    ListNode *temp = list;

    for (i = 0; i < vals.size(); i++) {
      temp->val = vals[i];
      temp->next = (struct ListNode *)malloc(sizeof(struct ListNode *));
      if (i != vals.size() - 1)
        temp = temp->next;
    }

    return list;
  }

  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int val1 = 0, val2 = 0, total = 0, i = 0, j = 0, exp = 10;
    ListNode *temp1 = l1, *temp2 = l2;

    while (1) {
      if (temp1->next) {
        val1 += (temp1->val * (int)pow(10.0, (double)i++));
        temp1 = temp1->next;
      }

      if (temp2->next) {
        val2 += (temp2->val * (int)pow(10.0, (double)j++));
        temp2 = temp2->next;
      }

      else {
        temp1 = l1;
        total = val1 + val2;
        break;
      }
    }

    while (temp1->next) {
      temp1->val = total % 10;
      total /= 10;
      temp1 = temp1->next;
    }

    return l1;
  }
};

int main() {
  Solution sol;

  std::vector<int> input1, input2;
  input1 = {2, 4, 3};
  input2 = {5, 6, 4};

  ListNode *list1 = sol.fillLinkedList(input1);
  ListNode *list2 = sol.fillLinkedList(input2);
  ListNode *result = sol.addTwoNumbers(list1, list2);

  sol.printList(result);

  return 0;
}
