#include"stdio.h"

int main()
{
    double n;
    int z=0,f=0,o=0,c;
    while(scanf("%d",&c)!=EOF&&c!=0)
    {
        z=0;f=0;o=0;
        while(c)
        {
            scanf("%lf",&n);
            if(n>0)
                z++;
            else if(n==0)
                o++;
            else
                f++;
            c--;
        }
        printf("%d %d %d\n",f,o,z);
    }
}

