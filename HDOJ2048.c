#include"stdio.h"

int main()
{
    __int64 a[21][2]={{1,0},{1,0},{2,1},{6,2}};
    int n,m,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        for(i=4;i<=m;i++)
        {
            a[i][0]=i*a[i-1][0];
            a[i][1]=(i-1)*(a[i-1][1]+a[i-2][1]);
        }
        printf("%.2lf%%\n",a[m][1]*100.0/a[m][0]);
    }
    return 0;
}
