#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main()
{
//    __int64 a[21][2]={{1,0},{1,0},{2,1},{6,2}};
    int n,m,i,j,x,y;
    int b[100];
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        printf("+");
        for(i=0;i<x;i++)
            printf("-");
        printf("+");
        printf("\n");
        for(i=0;i<y;i++)
        {
            printf("|");
            for(j=0;j<x;j++)
                printf(" ");
            printf("|");
            printf("\n");
        }
        printf("+");
        for(i=0;i<x;i++)
            printf("-");
        printf("+\n");
        printf("\n");
    }
    return 0;
}
