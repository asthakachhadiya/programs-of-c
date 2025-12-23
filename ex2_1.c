#include<stdio.h>
void main()
{
    int days,months,year;
    int x;
    printf("Enter the no. of days=\n");
    scanf("%d",&days);

    year=days/365;
    x=days%365;
    months=x/30;
    days=x%30;

    printf("year=%d months=%d days=%d",year,months,days);
}
