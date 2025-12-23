#include<stdio.h>
void mystrcat(char *,char *);
void main()
{
    char s1[10],s2[10];
    char *a,*b;
    a=s1;
    b=s2;
    scanf("%s %s",a,b);
    printf("\n%s",a);
    mystrcat(a,b);
    printf("\n%s",a);

}
void mystrcat(char *p,char *q)
{
    while(*p!='\0')
    {
        p++;
    }
    while(*q!='\0')
    {
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
}
