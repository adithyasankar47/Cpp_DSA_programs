#include <iostream>
class Stack
{
public:
    int data;
    Stack *next;
};
Stack *newNode(int data)
{
    Stack *node = new Stack();
    node->data = data;
    node->next = NULL;
    return node;
}

int isEmpty(Stack *root)
{
    return !root;
}

void push(Stack **root, int data)
{
    Stack *p = newNode(data);
    p->next = *root;
    *root = p;
    std::cout << "data pushed to stack\n";
}

void peek(Stack *root)
{
    if (isEmpty(root))
        return;
    std::cout << root->data;
}

void pop(Stack **root)
{
    if (isEmpty(*root))
        std::cout << "Stack underflow";
    Stack *temp = *root;
    *root = (*root)->next;
    free(temp);
}
int main()
{
    Stack *root = NULL;
    push(&root, 10);
    push(&root, 20);
    peek(root);
    pop(&root);
    std::cout << "\n";
    peek(root);
}
