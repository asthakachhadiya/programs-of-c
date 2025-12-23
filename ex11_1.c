#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("%d\n",*a);
    printf("%d",*b);
}
void main()
{
    int *a,*b;
    int p,q;
    scanf("%d %d",&p,&q);
    a=&p;
    b=&q;
    
    swap(a,b);
    

}


