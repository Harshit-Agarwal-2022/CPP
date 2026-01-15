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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(!head) return nullptr;

        ListNode * curr = head;
        ListNode * prev = nullptr;

        while(curr!=nullptr)
        {
            if(curr->val == val)
            {
                if(prev == nullptr)
                {
                    ListNode* temp = curr;
                    head = curr->next;
                    curr = curr->next;
                    delete temp;
                    continue;
                }
                else
                {
                    ListNode* temp = curr;
                    prev->next = curr->next;
                    curr = curr->next;
                    temp->next = nullptr;
                    delete temp;
                    continue;
                }
            }

            else
            {
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};

int main()
{
    
    vector<int> v1 = {7,7,7};
    ListNode* head = vectorToList(v1);   
    printList(head);
    
    Solution sol;
    printList(sol.removeElements(head,7));
    

    return 0;

}
