#include<stdio.h>
void main()
{
    int p;
    printf("Enter the persentage:");
    scanf("%d",&p);
    switch (p)
    {
    case 1:
    if(p>80)
    printf("Grade=A");
    case 2:
    if(p>61)
    printf("Grade=B");
    case 3:
    if(p>51)
    printf("Grade=c");
    case 4:
    if(p>41)
    printf("Grade=D");
    case 5:
    if(p>35)
    printf("Grade=E");
    case 6:
    if(p<35)
    printf("Grade=F");
    default:
    printf("Better Luck Next Time");
}