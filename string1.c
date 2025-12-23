//revers of string
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[30],temp;
    int l,i,j;
    gets(str1);
    l=strlen(str1)-1;
    for(i=0,j=l;i<j;i++,j--)
    {
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
    }
    puts(str1);
}