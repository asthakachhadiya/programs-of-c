#include<stdio.h>
void main()
{
    int n,i,a=1;
    printf("Enter the number and get fectorial :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        a=a*i;
    }
    printf("Fectoreal=%d",a);
}