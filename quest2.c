#include<stdio.h>
int main()
{
    int i,x,sum=0;
    printf("Enter the number");
    scanf("%d",&x);
    for (i=1;i<=x;i++)
    {
        if(i%2==0)
    {    
    printf("\n%d",i);
    sum=sum+i;
    }
    }
    printf("\n\nSum of even numbers 1 to %d : %d",x,sum);
    return 0;
    
}
