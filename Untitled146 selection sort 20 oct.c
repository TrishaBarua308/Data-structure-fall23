#include<stdio.h>//selection
int main()
{
    int array[]= {15,12,8,16,4,35,25};
    int n = 7,block;

    for(int i=0; i<n-1; i++)//for passing
    {
        block = i;
        for(int j=i+1; j<n; j++)//swapping
        {
            if(array[block] > array[j])
            {
                block = j;
            }

            //swap block with first element
            int temp = array[block];
            array[block] = array[i];
            array[i] = temp;
        }
    }

    printf("Sorted array :\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t",array[i]);
    }

}
