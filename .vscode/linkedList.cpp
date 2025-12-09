#include <bits/stdc++.h>
using namespace std;


class Node
{   
    public:

    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }

    
};

void insertAtHead(Node* &head, int data)
{
    Node *newnode = new Node(data);
    newnode->next = head;
    head = newnode;

}

void print(Node* &head)
{
    Node *temp = head;

    while(temp!=NULL){

        cout<<temp->data<<" ";
        temp = temp->next;

    }

    cout<<endl;
}

int main()
{

    Node *newnode = new Node(10);

    Node* head = newnode;

    insertAtHead(head,20);
    
    print(head);
    
    insertAtHead(head,30);
    
    print(head);


     return 0;
}
