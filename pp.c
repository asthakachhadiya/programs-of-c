#include<stdio.h>
struct data
{
    int x;
    int *y;
};
int main()
{
    struct data d[2],*p;
    int arr[4]={2,4,6,8};
    int a,b,c,d1,e,f;
    p=d;
    d[0].x=9;
    d[1].x=18;
    d[0].y=arr;
    d[1].y=arr+2;

    a=p->x;
    b=(++p)->x;
    c=*p->y;
    d1=(*p->y)++;
    e=*p->y;
    p->y++;
    f=*p->y;

    printf("%d\n%d\n%d\n",a,b,c);
    printf("%d\n%d\n%d\n",d1,e,f);
    return 0;

}