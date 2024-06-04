#include<stdio.h>
int main()
{
    //Problem 1: Pyramind pattern
   /* int n;
    printf("Enter the number of N: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            printf(" ");
        }
        for( int k= 1; k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
        
    } */
    //Problem 2 : Diamond pattern
   /* int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for( int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            printf(" ");
        }
        for(int k= 1; k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
        for(int i=n-1;i>=1;i--)
        {
            for(int j=n;j>i;j--)
            {
                printf(" ");
            }
            for(int k=1; k<=2*i-1;k++)
            {
                printf("*");
            }
            printf("\n");
        }
*/
//Problem 3:  Star Square pattern 
 /*int rows,coloumn;
printf("Enter the no. of rows and coloumn : ");
scanf("%d %d",&rows,&coloumn);
for(int i=1; i<=rows;i++)
{
    for(int j=1;j<=coloumn;j++)
    {
        printf("* ");

    }

    printf("\n");
}*/
/*
//Problem 4: Printing a hollow square
int size;
printf("Enter the size of square : ");
scanf("%d",&size);
for(int i=0;i<size;i++)
{
    for(int j=0;j<size;j++)
    {
        if(i==0||i== size-1||j==0||j== size -1)
    {
        printf("* ");
    }
    else{
        printf("  ");
    }
    }
    printf("\n");
} */
// Problem 5: Cross star pattern;
int size;
printf("Enter the Size of star pattern: ");
scanf("%d ",&size);
for(int i=0;i<size;i++)
{
    for(int j=0;j<size;j++)
    {
    if (i == j || i == size - j - 1) 
    {
        printf("* ");
    }
    else{
        printf("  ");
    }
    }
    printf("\n");
    
}
    
}