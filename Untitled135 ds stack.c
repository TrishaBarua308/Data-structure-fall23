#include<stdio.h>
#define arraySize 5
int top = -1;
int array[arraySize];
void push(int value)
{
    top++;
    if(top>= arraySize)
    {
        printf("Overflow.");
        top--;
        return 0;
    }
    array[top] = value;
}
int pop()
{
    if(top<0)
    {
        printf("Underflow.");
        return 0;
    }
    //int x = array[top];
    array[top] = 0;
    top--;
    return 0;
}
int peek()
{
    return array[top];
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    pop();
    pop();
    peek();
    printf("%d",peek());
}
