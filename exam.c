//WAP to calculate frequency of a character of a given string
#include<stdio.h>
void main()
{
    char a[20];
    int freq[256]={0};
    int i;
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        freq[(int)a[i]]++;
    }
    for(i=0;i<256;i++)
    {
        if(freq[i]!='\0')
        {
            printf("%c = %d\n",i,freq[i]);
        }
    }

}
