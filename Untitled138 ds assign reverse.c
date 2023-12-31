#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int value;
    struct Node *next;
    struct Node *prev;
};
struct Node *head = NULL;
struct Node *tail = NULL;

void firstNode(int v)
{
    struct Node *n = (struct Node*)malloc(sizeof(n));
    n->value = v;
    n->next = NULL;
    head = n;
    tail = n;
}
void addNode(int v)
{
    struct Node *n = (struct Node*)malloc(sizeof(n));
    n->value = v;
    n->next = NULL;
    tail ->next = n;
    tail = n;
}
int reverse()
{
    if(head == NULL)
    {
        return;
    }
    struct Node *current;
    current = head;
    struct Node *next;
    struct Node *prev;

    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    struct Node *head = prev;
}
void print()
{
    struct Node *temp;
    temp = head;
    while(temp!= NULL)
    {
        printf("%d\t",temp->value);
        temp = temp->next;
    }
}
int main()
{
    firstNode(5);
    addNode(25);
    addNode(20);
    reverse();
    print();
}
