#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int value;
    struct Node *next;
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

void print(int v,int index)
{
    struct Node *current = head;
    for(int i=0; i<index; i++)
    {
        current = current->next;
    }
    struct Node *second = current;

    current = head;
    for(int i=0; i<index-1; i++)
    {
        current = current->next;
    }
    struct Node *first = current;

    struct Node *n = (struct Node*)malloc(sizeof(n));
    n->value = v;
    n->next = second;
    first->next = n;

}

void printList()
{
    struct Node *temp;
    temp = head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->value);
        temp = temp->next;
    }
}
int main()
{
    firstNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);
    print(35,3);
    printList();

}
