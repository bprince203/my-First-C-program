#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    //printf("Enter the numbers: ");
   int num[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the elements of array: " ,i+1);
        scanf("%d",&num[i]);
    }
  for(int i=0;i<size;i++)
  {
  for(int j=0;i<j;j--)
  {
    int temp= num[i];
     num[i]= num[j];
     num[j] = temp;
     }
  }
  printf("The reverse element of a array is : ");
     for(int i= 0;i<size;i++)
     {
        printf("%d\t", num[i]);
     }
}