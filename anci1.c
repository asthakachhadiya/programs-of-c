//program to evelute the eq y=x^n
#include<stdio.h>
void main()
{
    float y=1,x;
    int n,count=1;
    printf("Enter the value of X and n:");
    scanf("%f %d",&x,&n);
    while(count<=n)
    {
        y=y*x;
        count++;
    }
    printf("\nx=%f;n=%d;x to power n=%f\n",x,n,y);
}
