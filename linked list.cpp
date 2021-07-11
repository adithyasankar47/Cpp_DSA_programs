#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertatTail(node* &head,int val)
{

    node* n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next)
    {
        temp = temp->next;
        
    }
    temp->next = n;
}

void insertatHead(node* &head,int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}

bool search(node* head, int val)
{
    node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void display(node* head)
{
    node* temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deletion(node* &head,int val)
{
    node* temp=head;
    while(temp->next->data != val)
    {
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
node* reverse(node* &head)
{
    node* prev=NULL;
    node* curr = head;
    node* next;
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;

}
node* reverseRecursive(node* &head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
int main()
{
    node* head=NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    display(head);
    cout<<search(head,4);
    deletion(head,3);
    cout<<endl;
    display(head);
    node* newhead = reverseRecursive(head);
    display(newhead);
    return 0;
}