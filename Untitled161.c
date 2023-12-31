#include<stdio.h>//power
int power(int m,int n)
{
    if(n==0)
        return 1;
    else
        return m*power(m,n-1);
}
int main()
{
    int m,n;
    printf("Input base and exponential : ");
    scanf("%d%d",&m,&n);

    printf("Result = %d",power(m,n));
}
