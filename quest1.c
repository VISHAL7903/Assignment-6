#include<stdio.h>
int main()
{
    int i,x,sum=0;
    printf("Enter the number");
    scanf("%d",&x);
    for (i=1;i<=x;i++)
    sum=sum+i;
    printf("\nSum = %d",sum);
    return 0;
    
}     