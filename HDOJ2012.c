#include"stdio.h"
#include"math.h"
int main()
{
    int x,y,i,g,f=1,n;
    double b,s=0;
    while(scanf("%d%d",&x,&y)==2)
    {
        if(x==0&&y==0)
            break;
        for(i=x;i<=y;i++)
        {
            n=i*i+i+41;
            for(g=2;g<=sqrt(n);g++)
            {
                if(n%g==0)
                {
                    f=0;
                    break;
                }
            }
            if(f==0)
                break;
        }
        if(f==0)
            printf("Sorry\n");
        else
            printf("OK\n");
        f=1;
    }
    return 0;
}

