#include<stdio.h>
int main()
{
    int i,x,fact=1;
    printf("Enter the value of n\n");
    scanf("%d",&x);
    for (i=1;i<=x;i++)
    {
        
     fact=fact*i;  
     }

    printf("factorial of %d is %d",x,fact);
    return 0;
    
}
