#include<stdio.h>
#include<conio.h>
int repetition(int arr[],int size)
{
    int indexRepetition[20]={0};
    for(int i=0; i<size; i++)
    {//counting index repetition
        indexRepetition[arr[i]]++;
    }

    int maxRepeat=0;
    for(int i=0; i<20; i++)
    {//find maximum repeat
        if(indexRepetition[i]>maxRepeat)
        {
            maxRepeat=indexRepetition[i];
        }
    }

    int count_max_repetition=0;
    for(int i=0; i<20; i++)
    {//compare maximum repetition
        if(indexRepetition[i]==maxRepeat)
        {
            count_max_repetition++;
        }
    }
    return count_max_repetition>=2;
}
int main()
{
    int array1[]= {4,5,6,6,4,3,6,4};
    int array2[]= {3,4,6,3,4,7,4,6,8,6,6};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    printf("%s\n",repetition(array1,size1)?"True":"False");
    printf("%s\n",repetition(array2,size2)?"True":"False");

    getch();
}
