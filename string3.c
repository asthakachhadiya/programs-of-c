//string , sub string
#include<stdio.h>
void main()
{
    char str1[30],str2[10];
    int i,j,k,match=0;
    printf("Enter main string :");
    gets(str1);
    printf("Enter substring :");
    gets(str2);
    i=0;
    while(str1[i]!='\0')
    {
        j=0,k=i;
        while(str1[k]==str2[j] && str1[k]!='\0')
        {
            j++,k++;

        }
        if(str2[j]=='\0')
        {
            match++;
            printf("\nString found at %d",i);
        }
        i++;

    }
    if(match==0)
    {
        printf("\nString not found");
    }
    else
    {
        printf("\nString found %d Times",match);
    }
}