#include<stdio.h>//fibonacci
int fibonacci(int n)
{
    if(n<=1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    printf("Input number : ");
    scanf("%d",&n);
    printf("%d",fibonacci(n));
}
