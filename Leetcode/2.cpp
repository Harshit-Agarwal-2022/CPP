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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     
        if(l1==nullptr && l2==nullptr) return nullptr;
        
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        
        ListNode* t1 = l1;
        ListNode* t2 = l2;

        int carry = 0;

        while(t1!=nullptr || t2!=nullptr)
        {   


            if(t1==nullptr && t2==nullptr)
            {
                break;
            } 
                

            int num1 = 0 , num2 = 0; 
            
            if(t1!=nullptr)
            num1 = t1->val;

            if(t2!=nullptr)
            num2 = t2->val;

            int curSum = num1 + num2 + carry;
            int val = curSum%10;
            carry = curSum/10;

            ListNode *newnode = new ListNode(val);
            
            if(!head)
            {
                head = newnode;
                tail = newnode;
            } 
            else
            {
                tail->next = newnode;
                tail = newnode;
            }
            
            if(t1)
            t1 = t1->next;
            
            if(t2)
            t2 = t2->next;
            
        }
        
        if(carry!=0)
        {
            ListNode *newnode = new ListNode(carry);
            tail->next = newnode;
            tail = newnode;

        }

        return head;

    }
};

int main()
{
    
    vector<int> v1 = {9,9,9,9,9,9,9};
    vector<int> v2 = {9,9,9,9};
    ListNode* l1 = vectorToList(v1);   
    ListNode* l2 = vectorToList(v2);   
    printList(l1);
    printList(l2);
    
    Solution sol;
    printList(sol.addTwoNumbers(l1,l2));


    return 0;

}
