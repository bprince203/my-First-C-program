#include<stdio.h>
int main()
{   int  result[3][3];
  
    int num1[3][3]={
        {2,3,4},
        {5,9,8},
        {5,6,8}
    };
     int num2[3][3]={
        {2,3,4},
        {5,9,8},
        {5,6,8}
    };
    printf("Matrix 1 is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("%d \t",num1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2 is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("%d \t",num2[i][j]);
        }
        printf("\n");
}
for(int i=0;i<3;i++)
{
    for(int j =0;j<3;j++)
    {
     result[i][j]=0;
        for(int k=0;k<3;k++)
{   
        
        result[i][j] +=   num1[i][k]*num2[k][j];
}
    }   
}
printf("The Multiplaction of the Matrix is: \n");
for(int i=0;i<3;i++)
{
    for(int j =0;j<3;j++)
    { 
        printf("%d  \t",result[i][j]);
    
    }
    printf("\n");
}
}