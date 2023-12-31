#include<stdio.h>
int print(int arr[],int n)//for printing function
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}
int rotation(int arr[],int n,int r,int lr)
{
    if(lr==0)//right rotation
    {
        for(int k=0; k<r; k++)//for rotation count
        {
            int first = 0,second = first +1;
            int temp = arr[0];
            for(int i=0; i<n; i++)
            {
                arr[first] = arr[second];
                first = (first +1)%n;//%n for taking index 0 after input n-1 index
                second = (first + 1)%n;
            }
            arr[n-1] = temp;
        }
    }
    else//left rotation
    {
        for(int k=0; k<r; k++)//for rotation count
        {
            int first = n-1,second = first -1;
            int temp = arr[n-1];
            for(int i=0; i<n; i++)
            {
                arr[first] = arr[second];
                first = (first -1)%n;//%n for taking index 0 after input n-1 index
                second = (first - 1)%n;
            }
            arr[0] = temp;
        }
    }
}

int main()
{
    int n=5,arr[]= {10,20,30,40,50};
    print(arr,n);
    while(5>1)
    {
        printf("\nThis is your array. Now, how many rotation you want?\n");
        int r;
        scanf("%d",&r);
        printf("Right =1 Or Left = 0\n");
        int lr;
        scanf("%d",&lr);
        arr == rotation(arr,n,r,lr);
        printf("\n");
        print(arr,n);
    }
}
