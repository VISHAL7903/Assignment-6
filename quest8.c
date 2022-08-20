#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter the value");
    scanf("%d",&x);
    for (i=2;i<=x-1;i++)
    {
        if(x%i==0)
        break;
    }
        if (i==x)
        printf("%d is a prime number",x);
        else
        printf("%d is a not prime number",x);
        return 0;
        
            
        
        
    
    
}