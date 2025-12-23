#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<6;i++)

    {
        for (j=1;j<=i;j++)
        {              //a=1;
            printf("*");//printf("%d",a);a++
        }
        printf("\n");
    }
    return 0;
}