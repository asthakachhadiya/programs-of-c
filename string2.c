#include<stdio.h>
void main()
{
    char str1[30],str2[30],str3[30];
    int i,j,count=0,k,special=0;
    gets(str1);
    for(i=0,j=0,k=0;str1[i]!='\0';i++)
    {
        if((str1[i]>=65 && str1[i]<=90) || (str1[i]>=97 && str1[i]<=122))
        {
            str2[j]=str1[i];
            count++;
            j++;

        }
        else
        {
            str3[k]=str1[i];
            special++;
            k++;

        }
            

    }
    str2[j]='\0';
    str3[k]='\0';
    puts(str2);
    printf("%d\n",count);
    puts(str3);
    printf("%d\n",special);
}