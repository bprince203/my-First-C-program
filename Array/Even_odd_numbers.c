#include <stdio.h>
int main()
{int  even =0, odd =0;
 int num1[5];
//  printf("Enter the size of array : ");
//  scanf("%d" ,&n);
 //printf("Enter the elements of array: ");
 
 for(int i = 0; i <5; i++)
 {
     printf("Enter the elements of array: ",  i + 1);
    scanf("%d", &num1[i]);
 }
 for (int i = 0; i < 5; i++)
 {
    if(num1[i]%2==0)
    {    
        even++;
    }
    else{
        odd++;
    }
 }
 printf("Even number is: %4d \n  ", even);
 printf("Odd number is: %4d ", odd);
    
}