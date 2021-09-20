#include <iostream>
using namespace std;
class LinkedList{
    public:
    int data;
    LinkedList* next;
};
LinkedList *newNode(int val){
    LinkedList *node = new LinkedList();
    node->data=val;
    node->next=NULL;
    return node;
}
void insertathead(LinkedList* &head, int val){
    LinkedList* n=newNode(val);
    head=n;
}
void insertattail(LinkedList* &head, int val){
    LinkedList* n=newNode(val);
    if(head==NULL)
        head=n;
    LinkedList* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
}
void display(LinkedList* head){
    LinkedList *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAt(LinkedList* &head, int k,int val){
    LinkedList* n=newNode(val);
    LinkedList* temp=head;
    k--;
    while(k && temp->next!=NULL){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
}
void deletefromBegining(LinkedList* &head){
    head=head->next;
}
void deletefromEnd(LinkedList* &head){
    LinkedList* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}
void deleteatPos(LinkedList* &head, int k){
    LinkedList* temp=head;
    k--;
    if(head==NULL)
        return;
    if(head->next==NULL)
        deletefromBegining;
    while(k){
        temp=temp->next;
    }
    if(temp->next==NULL)
        deletefromEnd(head);
    else temp->next=temp->next->next;
}
int main()
{
    LinkedList *head=NULL;
    insertathead(head,1);
    insertattail(head,2);
    insertAt(head,1,0);
    display(head);
    deleteatPos(head,1);
    cout<<"\n";
    display(head);
    return 0;
}