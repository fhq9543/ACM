#include<stdio.h>

int main()
{
    __int64 a[51];
    int n,i;
    a[0]=0;
    a[1]=1;
    for(i=2;i<=50;i++)
        a[i] = a[i-1]+a[i-2];

    while(scanf("%d",&n),n+1)
    {
        printf("%I64d\n",a[n]);
    }
    return 0;
}
