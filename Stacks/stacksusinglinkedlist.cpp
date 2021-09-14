#include <iostream>
using namespace std;
class StackNode
{
public:
    int data;
    StackNode *next;
};
StackNode *newNode(int data)
{
    StackNode *node = new StackNode();
    node->data = data;
    node->next = NULL;
    return node;
}
int isEmpty(StackNode *root)
{
    return !root;
}
void push(StackNode **root, int data)
{
    StackNode *node = newNode(data);
    node->next = *root;
    *root = node;
    cout << data << " pushed to stack\n";
}
int peek(StackNode *root)
{
    if (isEmpty(root))
        return NULL;
    return root->data;
}
void pop(StackNode **root)
{
    if (isEmpty(*root))
        cout << "Stack Underflow\n";
    StackNode *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
}

int main()
{
    StackNode *root = NULL;
    push(&root, 10);
    push(&root, 20);
    cout << "Top element is " << peek(root) << endl;
    pop(&root);
    cout << "After popping" << peek(root) << endl;

    return 0;
}
