//multiplication of 2 matrix
#include<stdio.h>
void mian()
{
    int a[3][3],b[3][3],i,j,c[3][3],k;
    printf("Enter the element of 3*3 matrix 1:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",a[i]);
        }
        printf("\n");
    }
    printf("Enter the element of 3*3 matrix 2:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",b[i]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
        printf("\n");
    }
    
}