#include"stdio.h"
#define N 1000

int main()
{
    int n,m,i,p,l,t,b;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        p=l=0;
        t=n;b=m;
        if(n>m)
        {
            t=m;
            b=n;
        }
        for(i=t;i<=b;i++)
        {
            if(i%2==0)
                p+=i*i;
            else
                l+=i*i*i;
        }
        printf("%d %d\n",p,l);
    }
    return 0;
}
