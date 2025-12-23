#include<stdio.h>
void main()
{
    int i,j,k;
    int n,s=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",s);
        }
        s++;
        printf("\n");
    }
}