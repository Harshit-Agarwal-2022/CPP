#include <bits/stdc++.h>
using namespace std;

class node
{

public:

int val;
node* next;

node(int val)
{
    this->val = val;
    next = nullptr;
}

};

int listSize(node *head)
{
    if(!head)
    return 0;

    node *temp = head;
    int res = 0;

    while(temp!=nullptr)
    {
        temp=temp->next;
        res++;
    }

    return res;
}

void insertHead(int val, node *&head, node *&tail)
{    
    
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;

    if(head->next==nullptr)
    {
        tail = head;
    }
}

void insertTail(int val, node* &head, node *&tail)
{
    if(!tail)
    {
        insertHead(val,head,tail);
        return;
    }

    node *newnode = new node(val);
    tail->next = newnode;
    tail =newnode;
}

void insertAt(int val, int pos, node* &head, node*& tail)
{
    int size = listSize(head);

    if(pos>size)
    return;

    if(pos==0)
    {
        insertHead(val,head,tail);
        return;
    }

    if(pos==size)
    {
        insertTail(val,head,tail);
        return;
    }

    int count = pos-1;
    node* temp = head;
    node *newnode = new node(val);

    while(count!=0)
    {
        temp=temp->next;
        count--;
    }

    node *temp2 = temp->next;
    temp->next = newnode;
    newnode-> next = temp2;

    return;

}

void printList(node *head)
{

    if(!head){cout<<"listEmpty"<<endl; return;}

    node *temp = head;
    while(temp!=nullptr)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void freeList(node *&head,node *&tail)
{
    while (head != nullptr) {
        node *tmp = head;
        head = head->next;
        delete tmp;
    }

    tail=nullptr;
}

bool isEmpty(node *&head)
{
    if(head==nullptr)
    return true;

    return false;
}

void deleteHead(node* &head, node* &tail)
{
    if(!head) return;

    node *temp = head;
   
    if(head==tail)
    tail=nullptr;

    head = head->next;

    delete temp;


}

void deleteTail(node *&head, node *&tail) {
    if (!head) return;                
    if (head == tail) {                
        delete head;
        head = tail = nullptr;
        return;
    }
    node *prev = head;
    while (prev->next != tail) prev = prev->next;
    delete tail;
    tail = prev;
    tail->next = nullptr;
}

void deleteAt(int pos, node* &head, node *&tail)
{
    int size = listSize(head);

    if(!head) return;

    if(pos >= size ) return;

    if(pos == 0)
    {
        deleteHead(head, tail);
        return;
    } 

    if(pos == size-1)
    {
        deleteTail(head, tail);
        return;
    }

    int count = pos - 1;

    node *temp = head;
    while(count!=0)
    {
        temp = temp->next;
        count--;
    }

    node *temp2 = temp->next;
    temp->next = temp2->next;
    temp2->next = nullptr;
    delete temp2;

    return;
}



int main()
{


    node *head = nullptr;
    node *tail = nullptr;

    insertTail(0,head,tail);
    insertHead(3,head,tail);
    insertHead(5,head,tail);
    insertHead(7,head,tail);
    insertHead(11,head,tail);
    insertHead(13,head,tail);

    printList(head);
    
    deleteAt(2,head,tail);
    printList(head);
    
    deleteAt(0,head,tail);
    printList(head);
    
    deleteAt(3,head,tail);
    printList(head);

   
    freeList(head,tail);

    return 0;
}
