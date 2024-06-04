#include<stdio.h>
int main()
{
     int num2[3][3];
   int num1[3][3] ={
        {2,4,5},
        {5,3,2},
        {5,9,8}
    };
    for(int i=0;i<3;i++)
    { for(int j=0;j<3;j++)
    {
      num2[i][j]=num1[i][j];
    }
    }
    printf("The transpose of Matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            printf("%d \t",num2[j][i]);
        }
        printf("\n");
    }

}