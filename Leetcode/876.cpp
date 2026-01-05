#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode* temp = head;
        int count = 0;

        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }

        temp=head;

       
            int i = count/2;
            while(i!=0)
            {
                i--;
                temp=temp->next;
            }

            return temp;

        
    }
};

int main() {
    
    // Build linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    ListNode* cur = head;
    for (int i = 2; i <= 5; ++i) {
        cur->next = new ListNode(i);
        cur = cur->next;
    }

    Solution sol;
    ListNode* mid = sol.middleNode(head);

    if (mid) cout << mid->val << '\n';

    
    return 0;
}