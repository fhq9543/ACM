#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main()
{
//    __int64 a[21][2]={{1,0},{1,0},{2,1},{6,2}};
    int n,m,i,j,x;
    int b[100];
    while(scanf("%d",&n)!=EOF)
    {
        memset(b,0,100);
        j=0;
        while(n)
        {
            b[j++]=n%2;
            n=n/2;
        }
        
        for(i=j-1;i>=0;i--)
            printf("%d",b[i]);
        printf("\n");
    }
    return 0;
}
