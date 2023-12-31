#include<stdio.h>//array reverse in recursion
void reverse(int a[],int low, int high)
{
    if(low<high)
    {
        int temp = a[low];
        a[low] = a[high];
        a[high] = temp;

        return reverse(a,low+1,high-1);
    }
}
int main()
{
    int array[]={10,20,30,40,50,60};
    int n= sizeof(array)/sizeof(array[0]);

    reverse(array,0,n-1);
    for(int i=0; i<n; i++)
    {
        printf("%d\t",array[i]);
    }

    return 0;

}
