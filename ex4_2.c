#include<stdio.h>
void main()
{
    int n,i,c,a=0,b=1;
    printf("Enter No. and you get Fibonacci :");
    scanf("%d",&n);
    printf("0 1 ");

    for(i=0;i<=(n-2);i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

}