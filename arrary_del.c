//delet array element
#include<stdio.h>
void main()
{
    int i,c,n,b;
    int a[20],j;
    printf("Enter the number of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be deleted:");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            c++;

        for(j=i;j<n;j++)
        {
            a[j]=a[j+1];
        }
        i--;
        } 
    }
    printf("Deleted array is :");
    for(i=0;i<(n-c);i++)
    {
        printf("%d\n",a[i]);
    }

}