#include<stdio.h>
union book
{
    int isbnno;
    char title[10];
    float price;
}a[3];
void main()
{
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i].isbnno);
        printf("%d\n",a[i].isbnno);
        scanf("%s",a[i].title);
        printf("%s\n",a[i].title);
        scanf("%f",&a[i].price);
        printf("%f\n",a[i].price);
    }
}