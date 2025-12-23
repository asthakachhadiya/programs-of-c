//sort element
#include<stdio.h>
void main()
{
    int n,a[100],i,j,temp;
    printf("Enter the number of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted array is :");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
