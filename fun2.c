#include<stdio.h>
void printline(void);
void main()
{
    printline();
}
void printline(void)
{
    int i,n;
    for(i=0;i<81;i++)
    {
        printf("=");
    }
}