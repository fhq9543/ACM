#include"stdio.h"
#include"math.h"
int main()
{
    int x,y,i,g,f=1,n;
    double b,s=0;
    while(scanf("%d",&n)!=EOF)
    {
        x=100;y=0;s=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&g);
            s+=g;
            if(x>g)
                x=g;
            if(y<g)
                y=g;
        }
        s=1.0*(s-x-y)/(n-2);
        printf("%.2lf\n",s);
    }
    return 0;
}

