#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};

struct Node *head = NULL;

struct Node *newNode(int v)
{
    struct Node *n = (struct Node *)malloc(sizeof(n));
    n->value = v;
    n->next = NULL;
    return n;
}

struct Node *merge(struct Node *p, struct Node *q)
{
    struct Node *sorting;
    struct Node *newHead = NULL;

    if (p == NULL)
    {
        return q;
    }
    if (q == NULL)
    {
        return p;
    }

    if (p && q)
    {
        if (p->value <= q->value)
        {
            sorting = p;
            p = sorting->next;
        }
        else
        {
            sorting = q;
            q = sorting->next;
        }
        newHead = sorting;
    }

    while (p && q)
    {
        if (p->value <= q->value)
        {
            sorting->next = p;
            sorting = p;
            p = sorting->next;
        }
        else
        {
            sorting->next = q;
            sorting = q;
            q = sorting->next;
        }
    }

    if (p == NULL)
    {
        sorting->next = q;
    }
    if (q == NULL)
    {
        sorting->next = p;
    }

    return newHead;
}

void print()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Node *list1 = newNode(5);
    list1->next = newNode(10);

    struct Node *list2 = newNode(7);
    list2->next = newNode(12);

    struct Node *result = merge(list1, list2);
    head = result;

    print();

    return 0;
}
