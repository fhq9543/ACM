#include"stdio.h"

int main()
{
    double x,a;
    while(scanf("%lf",&x)!=EOF)
    {
        a=x;
        if(x<0)
            a=-x;
        printf("%.2lf\n",a);
    }
    return 0;
}
