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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;

        ListNode* temp = head;
        int size = 0;
        int swap = 0;
        int save = 0;

        while(temp!=nullptr)
        {   
            if(temp->next == nullptr)
            swap = temp->val;

            size++;
            temp=temp->next;
        }
        temp = head;

        if(size == 1)
        return head;

        int rotate = k%size;

        while(rotate)
        {
            while(temp!=nullptr)
            {
                save = temp->val;
                temp->val = swap;

                if(temp->next!=nullptr)
                swap = save;
                
                temp = temp->next;
    
            }
            temp = head;
            rotate--;
        }

        return head;
        
        
    }
};

int main()
{
    
    vector<int> v1 = {0,1,2};
    ListNode* head = vectorToList(v1);
    printList(head);
    
    Solution sol;
    printList(sol.rotateRight(head,4));

    return 0;

}
