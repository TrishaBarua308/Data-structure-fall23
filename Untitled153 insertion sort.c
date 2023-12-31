#include<stdio.h>
#include<conio.h>
int main()
{
    int a[]={7,4,5,2},n=4,j;

    for(int i=1; i<n; i++)
    {
        int temp = a[i];
        j = i-1;

        while(j>=0 && a[j]>temp)//compare and move the value
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }

    printf("Sorted array :\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
    getch();

}
