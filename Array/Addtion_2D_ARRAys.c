#include<stdio.h>
int main()
{
    // Write a program to print the sum of two matrices:
    int sum[3][3];
    int num1[3][3]= {{23,45,65},
    {17,34,64},
    {15,65,3}
    };
    int num2[3][3]= {{23,45,65},
    {17,34,64},
    {15,65,3}
    };
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
                  sum[i][j]= num1[i][j]+num2[i][j];
        }
    }
    printf("The sum of matrix is : \n ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
 

}