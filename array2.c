//swap min to max
#include<stdio.h>
void main()
{
    int a[20],n,i;
    int temp,min,max;
    int pos1=0,pos2=0;
    printf("Enter the number of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            pos1=i; 
        }
        if(a[i]<min)
        {
            min=a[i];
            pos2=i;
        }
    }
    printf("Max=%d",max);
    printf("Min=%d\n",min);
    temp=a[pos1];
    a[pos1]=a[pos2];
    a[pos2]=temp;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}