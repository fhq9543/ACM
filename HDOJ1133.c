#include<stdio.h>
#include<string.h>

int a[201][501],b[501];

int main()
{
    int m,n;
    int i,j,s=0,temp=0,t;
    int c=0;
    memset(a,0,sizeof(a));
    a[0][0]=1;a[1][0]=1;
    for(i=2;i<201;i++)
        for(j=0;j<501;j++)
        {
            temp=i*a[i-1][j]+s;
            s=temp/10;
            a[i][j]=temp%10;
        }

    while(scanf("%d%d",&m,&n) && (m+n)!=0)
    {
        printf("Test #%d:\n",++c);
        if(n>m) 
        {
            printf("0\n");
            continue;
        }
        t=m-n+1;
        memset(b,0,sizeof(b));
        for(j=0;j<501;j++)
        {
            temp=t*a[m+n][j]+s;
            s=temp/10;
            b[j]=temp%10;
        }
        i=500;
        while(b[i]==0 && i>0) 
            i--;

        for(j=i,s=0,t=0;j>=0;j--)
        {
            temp=s*10+b[j];
            if(t==0)
            { 
                if(temp/(m+1)>0)
                {
                    t=1;
                    printf("%d",temp/(m+1));
                }
            }
            else 
                printf("%d",temp/(m+1)); 
            s=temp%(m+1);
        }
        printf("\n");

    }
    return 0;
}
