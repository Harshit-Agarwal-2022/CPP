#include <bits/stdc++.h>
using namespace std;



class Node
{
    public:

    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        next = nullptr;
    }
};

pair<Node* ,Node* > vectorToList(vector<int> v1)
{
    if(v1.empty()) return {nullptr,nullptr};
    
    Node* newnode = new Node(v1[0]);
    Node* head = newnode;
    Node* tail = head;

    for(int i = 1; i < v1.size(); i++)
    {
        Node* newnode = new Node(v1[i]);
        tail->next = newnode;
        tail = newnode;
        // newnode->next = head;
    }

    tail->next = head;
    
    return {head,tail};

}

void printList(Node* head)
{

    if(!head) return;

    Node* temp = head;
    cout<<temp->val<<" ";
    temp = temp->next;
    while(temp!=head)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    cout<<endl;
}


int main()
{
    vector<int> v1 = {2,3,5,7,11,13,15};
    auto p1 = vectorToList(v1);
    printList(p1.first);
    return 0;
}