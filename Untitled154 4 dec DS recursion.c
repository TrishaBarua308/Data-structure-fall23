#include<stdio.h>
#include<conio.h>
int palindrome(int num,int originNum,int reversedNum)
{
    if(num==0)
    {
        return originNum == reversedNum;
    }
    else
    {
        int rem = num % 10;
        reversedNum = reversedNum*10 + rem;
        return palindrome(num/10,originNum,reversedNum);
    }
}
int main()
{
    int num = 121,reversedNum = 0;
    int originNum = num;

    printf(palindrome(num,originNum,reversedNum)?"Yes":"No");

    getch();
}
