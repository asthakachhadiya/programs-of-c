#include<stdio.h>
void main()
{
    int n,b,digit;
    printf("Enter the number=");
    scanf("%d",&n);
    while(n>0)
    {
        b=n%10;
        digit=b;
        n=n/10;
        printf("%d",digit);
    }
    
}