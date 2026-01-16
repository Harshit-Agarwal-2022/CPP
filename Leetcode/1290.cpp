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
    int getDecimalValue(ListNode* head) {
        
        ListNode* temp = head;
        int size = 0;
        int res = 0;
        
        while(temp!=nullptr)
        {
            size++;
            temp = temp->next;
        }

        size--;

        temp = head;

        while(temp!=nullptr)
        {
            if(temp->val == 1)
            {
                res += pow(2,size);
            }

            size--;
            temp = temp->next;
        }

        return res;
    }
};

int main()
{
    
    vector<int> v1 = {1,1,0,1};
    ListNode* head = vectorToList(v1);
    printList(head);

    Solution sol;
    cout<<sol.getDecimalValue(head)<<endl;

    return 0;

}
