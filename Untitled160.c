#include<stdio.h>//array print
int arrayPrint(int n, int array[])
{
    if(n==0)
        return ;
    else
        arrayPrint(n-1,array);
        printf("%d\t",array[n-1]);
}

int main()
{
    int array[]= {10,20,30,40,50,60};
    int n=sizeof(array)/sizeof(array[0]);
    arrayPrint(n,array);
    return 0;
}
