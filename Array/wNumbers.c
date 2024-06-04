#include<stdio.h>
int main(){
    int num[5],i;
    //printf("Enter the numbers");
    
     
for( i=0;i<5;i++)
{
    printf("Enter the numbers: ", i+1);
    scanf("%d",&num[i]);
}
int largestnum = num[0];
for(int i= 1 ; i<5;i++)
{
if (largestnum<num[i])

{
    largestnum = num[i];
   // num[i] = num[i+1];
    
}

} 

printf("%d is the largest value ",largestnum);

}