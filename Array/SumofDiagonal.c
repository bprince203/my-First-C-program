#include<stdio.h>
int main()
{  int sum1=0,a=0;
     int sum[3][3];
    int num[3][3]={
    {2,3,4},
    {4,5,6},
    {6,8,3}
    };
    
    printf("Print the value of matrix: \n");
    for(int i= 0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",num[i][j]);
        }
        printf("\n");
    }
    for(int i= 0;i<3;i++)
    {
        
         sum1= sum1 +num[i][i];
        //int a= a+num;
        
    }
    printf("The sum of diagonal is: %d\n ",sum1);
    //printf("The sum of other elements are: \n",a);
    }
