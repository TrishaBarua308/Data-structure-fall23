#include<stdio.h>//linear search
int main()
{
    int array[]={10,20,30,40,50,60};
    int n= sizeof(array)/sizeof(array[0]);

    int value;
    printf("Input a value : ");
    scanf("%d",&value);

    for(int i=0; i<n; i++)
    {
        if(array[i]==value)
        {
            printf("Value= %d is present in %d number index\n",value,i);
        }
    }

    return 0;

}
