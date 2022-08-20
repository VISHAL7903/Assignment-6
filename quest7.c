#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Number Of digit is %d",count);
    return 0;
}