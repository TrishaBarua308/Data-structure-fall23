#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[5]={10,20,30,40,50},i,newArray[10],n,n2,RS,num;
    printf("Input the size : ");
    scanf("%d",&n);

    printf("Array :\n");
    for(i=0; i<n; i++)
    {//printing a random array
        printf("%d\t",array[i]);
    }
    printf("\nInput the index want to add person : ");
    scanf("%d",&RS);
    printf("\n");

    for(i=n-1; i>(RS-1); i--)
    {
        array[i] = array[i-RS];//RS minus for right shift index size
    }
    printf("Input the number want to add : ");
    scanf("%d",&num);
    for(i=0; i<RS; i++)
    {
        array[i]=num;
    }

    for(i=0; i<n; i++)
    {
        printf("%d\t",array[i]);
    }

}
