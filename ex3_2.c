#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a=");
    scanf("%d",&a);

    if (a>0)
    {
        printf("a is positive integer");
    }
    else if(a==0)
    printf("a is zero");
    else 
    printf("a is nagative integer");

}