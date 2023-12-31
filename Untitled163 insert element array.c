#include<stdio.h>//insert element in an array
int main()
{
    int a[]={10,20,30,40,50,60};
    int n= sizeof(a)/sizeof(a[0]);

    int index,value;
    printf("Input index : ");
    scanf("%d",&index);

    printf("Input value : ");
    scanf("%d",&value);

    for(int i=n; i>=index; i--)
    {
        a[i] = a[i-1];
    }

    printf("Updated array : ");
    for(int i=0; i<n+1; i++)
    {
        if(i==index)
        {
            a[i] = value;
        }
        printf("%d\t",a[i]);
    }

    return 0;

}
