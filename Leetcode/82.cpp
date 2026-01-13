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

    if(!head)
    {
        cout<<"head is null"<<endl; 
        return;
    }

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
    
        if(!head->next) return head;

        ListNode* temp = head;
        ListNode* prev = nullptr;

        while(temp!=nullptr)
        {
            if(temp->next!= nullptr  && temp->val == temp->next->val)
            {
                while(temp->next!= nullptr  && temp->val == temp->next->val)
                {
                    temp = temp->next;
                }

                if(prev == nullptr)
                {
                    head = temp->next;
                    temp = temp->next;
                }
                else
                {
                    prev->next = temp->next;
                    temp = temp->next;
                }

            }

            else
            {
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    
    }
};

int main()
{
    
    vector<int> v1 = {1,1,2,2};
    ListNode* head = vectorToList(v1);   
    printList(head);
    
    Solution sol = Solution();
    
    printList(sol.deleteDuplicates(head));


    return 0;

}
