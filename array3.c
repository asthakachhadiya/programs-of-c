//insert array element
#include<stdio.h>
void mian()
{
    int a[20],i,n,b,pos;
    printf("Enter the number of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    printf("Enter the element to be insert:");
    scanf("%d",&b);
    printf("position of element:");
    scanf("%d",&pos);
    for(i=n;i<n;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=b;
    printf("New array after insert:");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }

}