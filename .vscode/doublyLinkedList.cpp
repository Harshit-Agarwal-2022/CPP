#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:

    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        next = nullptr;
        prev = nullptr;

    }


};

pair<Node*,Node*> vectorToList(vector<int> &v1)
{
       if(v1.empty())
       return {nullptr,nullptr};

       Node *head = new Node(v1[0]);
       Node *tail = head;

       for(int i = 1; i < v1.size(); i++)
       {
            Node *newnode = new Node(v1[i]);
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
       }

       return {head,tail};

}

void printList(Node *head)
{
    if(!head) return;

    Node * temp = head;

    while(temp!=nullptr)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    cout<<endl;

}

void printListReverse(Node *tail)
{
    if(!tail) return;

    Node * temp = tail;

    while(temp!=nullptr)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }

    cout<<endl;

}

int main()
{
    cout<<"hello"<<endl;

    vector<int> v1 = {2,3,5,7,11,13};
    auto [head, tail] = vectorToList(v1);

    printList(head);
    printListReverse(tail);

    

    return 0;
}