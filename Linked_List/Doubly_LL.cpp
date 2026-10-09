#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev=nullptr;
    }
};

void insertAtHead(int data, node *& head, node*& tail){
    node * n1=new node(data);
    n1->next=head;
    head->prev=n1;
    head=n1;
}


void insertAtTail(int data, node *& head, node*& tail){
    node * n1=new node(data);
    n1->prev=tail;
    tail->next=n1;
    tail=n1;
}

void InsertAtMid(int pos,int data, node *& head){
    node*n1=new node(data);
    node * temp=head;
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    temp->next->prev=n1;
    n1->next=temp->next;
    n1->prev=temp;
    temp->next=n1;
}

void del(int pos, node*&head){
    node* temp=head;
    int i=1;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;
}

void print(node *&head){
    node * temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){
    node* head=nullptr;
    node* tail=nullptr;
    node* n1=new node(10);
    head=tail=n1;
    insertAtHead(20,head,tail);
    insertAtTail(50,head,tail);
    insertAtHead(40,head,tail);
    print(head);

    cout<<"Head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data<<endl;
}