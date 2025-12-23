#include<stdio.h>
void main()
{
    int n,i,F=1;
    printf("Enter the no. =");
    scanf("%d",&n);
    if(n>=0)
    {
    for(i=1;i<=n;i++)
    {
        F=F*i;
    }
    printf("Fectorial=%d",F);
    }
    else
    {
        printf("please Enter Valid Number");
    }   
}