#include <stdio.h>
#include"string.h"
#include <stdlib.h>

int cmp(const void *p,const void *q)
{    
    return -strcmp(*(char (*)[16])p,*(char (*)[16])q);
}


int main(void)
{
    int i,j,m,n;
    char a[1005][16];

    while(scanf("%d",&n)!=EOF&&n)
    {
        int max=0,t=0;j=0;
        for(i=0;i<n;i++)
            scanf("%s",a[i]);
        qsort(a,n,sizeof(a[0]),cmp);
        for(i=0;i<n-1;i++)
            if(strcmp(a[i],a[i+1])==0)
                t++;
            else
            {
                if(t>max)
                {
                    max=t;
                    j=i;
                }
                t=0;
            }
        printf("%s\n", a[j]);
        
    }
    return 0;
}

