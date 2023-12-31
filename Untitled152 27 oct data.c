#include<stdio.h>//binary search
#include<conio.h>
int binarySearch(int left,int right,int array[],int value)
{
    int answer;
    int mid=(left+right)/2;

    if(array[mid]==value)
    {
        return mid;
    }
    if(array[mid]>value)
    {//left side
        answer = binarySearch(left,mid-1,array,value);
        return answer;
    }
    else
    {//right side
        answer = binarySearch(mid+1,right,array,value);
        return answer;
    }
    return -1;
}
int main()
{
    int array[]={10,20,30,40,50,60,70,80,90,100};
    int value=90;
    int n = sizeof(array)/sizeof(array[0]);//10
    int left = 0,right = n-1;
    int answer = binarySearch(left,right,array,value);
    printf("%d\n",answer);

    getch();
    return 0;
}
