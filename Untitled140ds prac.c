#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
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
void print()
{
    struct Node *temp = head;
    while(temp!= NULL)
    {
        printf("%d\t",temp->value);
        temp = temp ->next;
    }
}
void reverseNode()
{
    struct Node *prevNode, *currentNode , *nextNode;
    prevNode=0 ;
    currentNode = nextNode = head;
    while(nextNode != NULL)
    {
        nextNode = nextNode->next;
        currentNode -> next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    head = prevNode;
}
int main()
{
    firstNode(5);
    addNode(25);
    addNode(20);
    printf("Linked List\n");
    print();
    reverseNode();
    printf("\nReversed Linked List\n");
    print();

    getch();
    return 0;
}
