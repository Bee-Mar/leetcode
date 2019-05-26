#include <iostream>
#include <vector>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  void displayList(struct ListNode *list, int numelems) {

    struct ListNode *temp = list;

    while (temp && --numelems >= 0) {
      std::cout << temp->val << std::endl;
      temp = temp->next;
    }

    free(temp);
  }

  ListNode *fillList(std::vector<int> &values) {
    int i;
    struct ListNode *list = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *temp = list;

    for (i = 0; i < values.size(); i++) {
      temp->val = values[i];
      temp->next = (struct ListNode *)malloc(sizeof(struct ListNode));
      temp = temp->next;
    }

    return list;
  }

  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {

    struct ListNode *result;

    result = (struct ListNode *)malloc(sizeof(struct ListNode));

    int carry = 0, sum = 0;

    while (l1->next || l2->next) {

      if (l1) {
        sum += l1->val;
        std::cout << "l1->val = " << l1->val << std::endl;
      }

      if (l2) {
        sum += l2->val;
        std::cout << "l2->val = " << l2->val << std::endl;
      }

      if (sum % 10 == 0) {
        carry = sum / 10;
        sum = 0;
      } else {
        carry = 0;
      }

      result->val = sum;
      result->next = (struct ListNode *)malloc(sizeof(struct ListNode));

      sum = carry;

      l1 = l1->next;
      l2 = l2->next;
    }

    return result;
  }
};

int main() {

  std::vector<int> values1 = {2, 4, 3};
  std::vector<int> values2 = {5, 6, 4};

  Solution solution;

  struct ListNode *l1 = solution.fillList(values1);
  struct ListNode *l2 = solution.fillList(values2);

  struct ListNode *result = solution.addTwoNumbers(l1, l2);
  solution.displayList(result, 3);

  free(l1);
  free(l2);

  return 0;
}
