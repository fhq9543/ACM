#include"stdio.h"

int main()
{
    __int64 a[21][2]={{1,0},{1,0},{2,1},{6,2}};
    int n,m,i,j,x;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&m,&x);
        for(i=4;i<=m;i++)
        {
            a[i][0]=i*a[i-1][0];
            a[i][1]=(i-1)*(a[i-1][1]+a[i-2][1]);
        }
        printf("%I64d\n",a[m][0]/a[m-x][0]/a[x][0]*a[x][1]);
    }
    return 0;
}
