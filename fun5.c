//claculater using function
#include<stdio.h>
int add(int,int);
int div(int,int);
int mul(int,int);
int sub(int,int);
void main()
{
    int a,b;
    int ans;
    scanf("%d%d",&a,&b);

    ans=add(a,b);
    printf("\nAdd=%d",ans);
    ans=div(a,b);
    printf("\nDiv=%d",ans);
    ans=mul(a,b);
    printf("\nMul=%d",ans);
    ans=sub(a,b);
    printf("\nSub=%d",ans);



}
int add(int a,int b)
{
    int ans;
    ans=a+b;
    return(ans);
}
int div(int a,int b)
{
     int ans;
     ans=a/b;
     return(ans);
}
int mul(int a,int b)
{
     int ans;
     ans=a*b;
     return(ans);
}
int sub(int a,int b)
{
     int ans;
     ans=a-b;
     return(ans);
}
