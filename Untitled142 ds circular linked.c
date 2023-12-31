#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int value;
    struct Node *next;
};
struct Node *cycle(struct Node *head)
{
    struct Node *slow = head;
    struct Node *fast = head;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            return 0;
        }
        return 1;
    }
};
int main()
{
    struct Node *a=NULL,*b=NULL,*c=NULL,*head = NULL;
    a= (struct Node*)malloc(sizeof(a));
    b= (struct Node*)malloc(sizeof(b));
    c= (struct Node*)malloc(sizeof(c));
    a->value = 10;
    a->next = b;
    b->value = 20;
    b->next = c;
    c->value = 30;
    c->next = b;
    head = cycle(head);
    if(head == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    printf("Cycle start Node = %d\n",a->value);
}
