#include"stdio.h"
#define N 1000

int main()
{
    int n,a[N],m,i;
    while(scanf("%d",&n)!=EOF)
    {
        m=1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2!=0)
                m*=a[i];
        }
        printf("%d\n",m);
    }
    return 0;
}
