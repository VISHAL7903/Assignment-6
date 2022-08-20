#include<stdio.h>
int main()
{
    int i,x,sum=0;
    printf("Enter the number");
    scanf("%d",&x);
    for (i=1;i<=x;i++)
    {
        
     sum=sum+(i*i*i);  
       
    printf("\n%d",i);
    
    }

    printf("\n\n Sum of Cube numbers 1 to %d : %d",x,sum);
    return 0;
    
}
