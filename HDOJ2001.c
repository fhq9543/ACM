#include"stdio.h"
#include"math.h"
int main()
{
    double x1,x2,y1,y2,t;
    while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)==4)
    {
        t=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        printf("%.2lf\n",t);
    }
    return 0;
}

