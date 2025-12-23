#include<stdio.h>
void main()
{
    int i,j,n=7,k;
    for(i=0;i<4;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("  ");
        }
        for(k=0;k<n;k++)
        {
            printf("* ");
        }
        n=n-2;
        printf("\n");
    }
}