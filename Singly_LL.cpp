#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtHead(int data, node *&head, node *&tail)
{
    node *n1 = new node(data);
    n1->next = head;
    if(head==nullptr){
        tail=n1;
    }
    head = n1;
}
void insertAtTail(int data, node *&tail, node*&head){
    node *n1=new node(data);
    if(tail!=nullptr){
        tail->next=n1;
    }
    else{
        head=n1;
    }
    tail=n1;
}

void insertAtMid(int data, int pos, node *&head,node*&tail){
    if(pos==1){
        insertAtHead(data,head,tail);
        return;
    }
    node *n2=new node(data);
    node *n1=head;
    int i=1;
    while(i<pos-1){
        n1=n1->next;
        i++; 
    }
    n2->next=n1->next;
    n1->next=n2;
}

void del(int pos, node *& head , node*& tail){
    
    if(pos==1){
        node * temp=head;
       head=head->next;
       delete temp;
       return;
   }
    node * n1=head;
    int i=1;
     while(i<pos-1){
        n1=n1->next;
        i++; 
    }
    node *temp=n1->next;
    if(temp==tail){
        tail=n1;
    }
    else{

        n1->next=temp->next;
    }
    delete temp;

    
    
}
 
void print(node *&head){
    node * temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<" "<<endl;
}
void printone(node *&tail){
    cout<<tail->data<<endl;
}


int main(){
    node * head=nullptr;
    node * tail=nullptr;

    insertAtTail(72,tail,head);
    insertAtTail(73,tail,head);
    insertAtTail(74,tail,head);
    insertAtTail(75,tail,head);
    insertAtMid(55,2,head,tail);
    del(5,head,tail);
    print(head);
    cout<<"head is: ";
    printone(head);
    cout<<"tail is: ";
    printone(tail);

}

