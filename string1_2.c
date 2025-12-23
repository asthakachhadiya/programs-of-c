#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    int l,i,j,k;
    gets(str1);
    k=strlen(str1);
    l=k-1;
    for(i=0;l>=0;i++,l--)
    {
        str2[i]=str1[l];
    }
    str2[k]='\0';
    puts(str2);

}
