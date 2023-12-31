#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int value;
    struct Node *next;
};
struct Node *head = NULL;
struct Node *tail = NULL;

void first_node(int v)
{
    struct Node *n = (struct Node*)malloc(sizeof(n));
    n->value = v;
    n->next = NULL;
    head =n;
    tail = n;
}
void add_node(int v)
{
    struct Node *n=(struct Node*)malloc(sizeof(n));
    n->value = v;
    n->next = NULL;
    tail->next = n;
    tail=n;
}

void insert(int v, int index)
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

    current  = head;
    /*for (int i=0; i<index; i++)
    {
        current = current->next;
        second = current;
    }*/

    struct Node *n=(struct Node*)malloc(sizeof(n));
    n->value = v;
    n->next = second;
    first ->next = n;
}

void print_list()
{
    struct Node *temp;
    temp = head;
    while(temp != NULL)
    {
        printf("%d\t",temp->value);
        temp = temp->next;
    }
}

int main()
{
    first_node(10);
    add_node(20);
    add_node(30);
    //add_node(40);
    insert(25,2);
    print_list();
}
