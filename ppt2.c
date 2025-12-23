//WAP to sum of digits of integer num
#include<stdio.h>
void main()
{
    int a,n,b,sum=0;
    printf("Enter a integer no:");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        b=n%10;
        sum=sum+b;
        n=n/10;
    }
    printf("Sum of digits of integers%d is %d",a,sum);
}