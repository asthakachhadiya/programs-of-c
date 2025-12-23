//matrix multiplication and sub
#include<stdio.h>
int i,j,k;
int fun(int [][30],int [][30],int,int,int);
void main()
{
    int A[30][30],B[30][30];
    int x,y,z;
    printf("Enter the value of Row and Column of Matrix A :");
    scanf("%d%d",&x,&y);
    printf("Enter the value of column of Matrix B :");
    scanf("%d",&z);
    printf("Enter the value of Matrix A:");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",A[i][j]);
        }
    }
    printf("Enter the value of Matrix B:");
    for(i=0;i<y;i++)
    {
        for(j=0;j<z;j++)
        {
            scanf("%d",B[i][j]);
        }
    }
    printf("Matrix A =");
     for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B =");
    for(i=0;i<y;i++)
    {
        for(j=0;j<z;j++)
        {
            scanf("%d",B[i][j]);
        }
        printf("\n");
    }
    fun(A,B,x,y,z);

    


}
int fun(int A[30][30],int B[30][30],int x,int y,int z)
{
    int mul[50][50],sub[50][50];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            mul[i][j]=0;
            for(k=0;k<z;k++)
            {
            mul[i][j]=mul[i][j]+A[i][k]*B[k][j];
            }
        }
    }

    printf("Matrix Multiplication of Matrix A & B is =");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            for(k=0;k<z;k++)
            {
                printf("%d",mul[i][j]);
            }
        }
        printf("\n");
    }

    if(x==y && y==z)
    {
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                sub[i][j]=A[i][j]-B[i][j];
            }
        }

        printf("Subtraction of Matrix A & B is =");

         for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                printf("%d",sub[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix subtraction not possible");
    }



}