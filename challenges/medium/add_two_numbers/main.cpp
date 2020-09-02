#include <iostream>
#include <vector>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x)
      : val(x), next(NULL) {
  }
};

class Solution {
public:
  void displayList(struct ListNode *list) {

    struct ListNode *temp = list;

    while (temp) {
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
    ListNode *result, *FINISHED = new ListNode(0);
    ListNode **listPtr = &result;
    int carryOver = 0, sum = 0;

    while (l1 != FINISHED || l2 != FINISHED || carryOver) {
      sum = (l1->val + l2->val + carryOver) % 10;
      carryOver = (l1->val + l2->val + carryOver) / 10;

      *listPtr = new ListNode(sum);
      listPtr = &(*listPtr)->next;

      l1 = l1->next ? l1->next : FINISHED;
      l2 = l2->next ? l2->next : FINISHED;
    }

    delete FINISHED;
    return result;
  }
};

int main() {

  std::vector<int> values1 = {1, 8};
  std::vector<int> values2 = {0};

  int resultSize = values1.size() > values2.size() ? values1.size() : values2.size();

  Solution solution;

  struct ListNode *l1 = solution.fillList(values1);
  struct ListNode *l2 = solution.fillList(values2);

  struct ListNode *result = solution.addTwoNumbers(l1, l2);

  solution.displayList(result);

  free(l1);
  free(l2);

  return 0;
}
