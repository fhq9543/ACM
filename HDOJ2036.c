#include<stdio.h>
int main()
{
    int n=0,i=0;
    double a[200]={0};
    double sum=0;
    while(scanf("%d",&n)&&n)
    {
        for(i=0;i<2*n;i++)
            scanf("%lf",&a[i]);
        a[i]=a[0];
        a[i+1]=a[1];
        for(i=0;i<n*2;i+=2)
            sum+=a[i]*a[i+3]-a[i+2]*a[i+1];
        printf("%.1lf\n",sum/2);
        for(i=0;i<200;i++)
            a[i]=0;
        sum=0;
    }
    return 1;
}
