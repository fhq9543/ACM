#include"stdio.h"
#include"math.h"
int main()
{
    int x,y,i,g,f=1,n,j;
    double b,s=0;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%d",&x);
        g=2;s=0;y=n/x;
        b=0;
        for(i=1;i<=y;i++)
        {
            b=(i-1)*x*((i-1)*x+1);
            s=i*x*(i*x+1)-b;
            printf("%.0lf",s/x);
            if(i!=y)
                printf(" ");
        }
        s=0;
        if(n%x!=0)
        {
            for(j=y*x+1;j<=n;j++)
                s+=2*j;
            printf(" %.0lf",s/(n-y*x));
        }
        printf("\n");
    }
    return 0;
}

