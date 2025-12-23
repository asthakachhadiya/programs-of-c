#include<stdio.h>
void main()
{
    int i,j,count=0;
    char a[20];
    getchar();
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65&&a[i]<=90)
        a[i]=a[i]+32;
        else if(a[i]>=97&&a[i]<=122)
        a[i]=a[i]-32;
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
        count++;

    }
    printf("Count of Vowels= %d",count);
}