#include<stdio.h>
int main()
{
    int n,i,remainder, reverse=0;
    printf("Enter a number");
    scanf("%d",&n);
    while (n!=0)
    {
        remainder=n%10;
        n=n/10;
        reverse=reverse*10+remainder;
    }
    printf("Reverse is %d",reverse);
    return 0;
    
}