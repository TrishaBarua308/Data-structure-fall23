#include<stdio.h>//bubble
int main()
{
    int array[]= {7,8,26,45,88,1,100,5,99,72,10};
    int n = sizeof(array)/sizeof(array[0]);
    int first,second;

    for(int i=0; i<n-1; i++)//pass
    {
        for(int j=0; j<n-1; j++)//swap
        {
            first = array[j];
            second = array[j+1];
            if(first > second)
            {
                int temp = first;
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("Sorted array :\n");

    for(int i=0; i<n; i++)
    {
        printf("%d\t",array[i]);
    }
}
/*
#include<stdio.h>
int main()
{
  int a[] = { 7,8,26,45,72,10 }, block = a[0];
  int n = sizeof (a) / sizeof (a[0]);

  for(int j=0; j<n-1; j++)//swap
  {
      for(int i=0; i<n; i++)
      {
          if(a[i] > a[i+1])
          {
              int temp = a[i];
              a[i] = a[i+1];
              a[i+1] = temp;
          }
      }
  }
  printf("Sorted Array :\n");
  for(int i=0; i<n; i++)
  {
      printf("%d\t",a[i]);
  }
}

*/
