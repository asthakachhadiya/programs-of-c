#include<stdio.h>
void main()
{
    int a=0,b=1,n,c,i,d;
    printf("Enter the num and get fibonacci serice :");
    scanf("%d",&n);
    printf("0 1 ");
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

}
