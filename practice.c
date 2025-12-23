#include<stdio.h>
int sort(int *,int );
void main()
{
    int i,a[10],*p,n;
    p=&a[0];
    printf("Enter the no of element :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("Befor sort :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
    sort(p,n);
    printf("After sort :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
}
int sort(int *a,int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(a+j)>*(a+i))
            {
                t=*(a+j);
                *(a+j)=*(a+i);
                *(a+i)=t;
            }

        }
    }
}