#include"stdio.h"
#include"math.h"
int main()
{
    int x,y,i,g,f=1,n;
    double b,s=0;
    while(scanf("%d",&n)!=EOF)
    {
        x=1;
        for(i=2;i<=n;i++)
            x=(x+1)*2;
        printf("%d\n",x);
    }
    return 0;
}

