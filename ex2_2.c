#include<stdio.h>
void main()
{
    int Hour,Min,x,Second;
    printf("Enter the no of Second:");
    scanf("%d",&Second);

    Hour=Second/3600;
    x=Second%3600;
    Min=x/60;
    Second=x%60;
    printf("Hour=%d Min=%d Seconds=%d",Hour,Min,Second);
}