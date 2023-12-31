#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int value;
    struct Node *next;
};
struct Node *head ;

void circular()
{
    struct Node *temp;
    head = NULL;
    int choice=1;
    while(choice)
    {
        struct Node *n=(struct Node*)malloc(sizeof(n));
        printf("Input value : ");
        scanf("%d",&n->value);
        n->next=NULL;
        if(head==NULL)
        {
            head = temp = n;
        }
        else
        {
            temp->next = n;
            temp = n;
        }
        temp->next =head;
        printf("1 for continue and 0 for exit : ");
        scanf("%d",&choice);
    }
}
void print()
{
    struct Node *temp = head;
    while(temp->next!=head)
    {
        printf("%d\t",temp->value);
        temp=temp->next;
    }
}
int main()
{
    circular();
    print();
}
