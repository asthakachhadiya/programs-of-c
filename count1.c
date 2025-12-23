#include<stdio.h>
void main()
{
char c;
int tab,line,blank;
tab=0;
line=0;
blank=0;
c=' ';
  while( c != '*' )
  {
    c=getchar(); // hello 
    if(c=='\t')
    {
      tab++;
    }
   if(c=='\n')
    {
      line++;
    }
   if(c==' ')
    {
      blank++;
    }
  }  
    printf("tab=%d,line=%d,blank=%d",tab,line,blank);
}