#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* vectorToList(vector<int> &v1)
{

    if(v1.empty())
    {
        return nullptr;
    } 

    ListNode *head = new ListNode(v1[0]);
    ListNode *tail = head;

    for(int i = 1; i < v1.size(); i++)
    {
        ListNode *newnode = new ListNode(v1[i]);
        tail->next = newnode;
        tail = newnode;
    }
    
    return head;
}

void printList(ListNode *head)
{
    ListNode *temp = head;
    
    while(temp!=nullptr)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    
    ListNode* temp = head;
     
    while(temp!=nullptr)
    {

        if(temp->next!=nullptr && temp->next->val == temp->val)
        {
            ListNode *t1 = temp;
            while(temp->next!=nullptr && temp->next->val == temp->val)
            {
                temp = temp->next;
            }

            t1->next = temp->next;
            continue;
        }

        else
        temp = temp->next;


    }
        return head;
    }
};

int main()
{
    
    vector<int> v1 = {1,2,3,4,4,5};
    ListNode* head = vectorToList(v1);    
    printList(head);

    Solution sol;
    sol.deleteDuplicates(head);
    printList(head);

}
