//expo
#include<stdio.h>
int expo(int,int);
void main()
{
    int a,b;
    int ans;
    scanf("%d%d",&a,&b);
    ans = expo(a,b);
}
int expo(int a,int b)
{
    int ans;
    if(b==0)
    {
    return 1;
    }
    else
    {
    ans=a*expo(a,b-1);
    printf("%d\n",ans);
    return(ans);
    
    }
}
