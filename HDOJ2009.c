#include"stdio.h"
#include"math.h"
int main()
{
    double n,s=0;
    int c;
    while(scanf("%lf",&n)!=EOF)
    {
        scanf("%d",&c);
        while(c)
        {
            s+=n;
            n=sqrt(n);
            c--;
        }
        printf("%.2lf\n",s);
        s=0;
    }
}

