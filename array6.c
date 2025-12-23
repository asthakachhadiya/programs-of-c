//suum ans avg of n number using array
#include<stdio.h>
int mian()
{
    int a[50],i,sum=0,n;
    float avg;
    printf("Enter the num of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    avg=(float)sum/n;
    printf("sum = %d",sum);
    printf("Avrage of n number is :%f",avg);

    return 0;
}