#include<stdio.h>
#include<string.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    if(n<1||n>20)
        return 0;
    for(j=0;j<n;j++)
    {
        int a[1200]={0},b[1200]={0},c[1200]={0},i,ka,kb,k;
        char a1[1200],b1[1200];
        scanf("%s",a1);
        ka=strlen(a1);
        for(i=0;i<ka;i++)
            a[i]=a1[ka-i-1]-'0';
        scanf("%s",b1);
        kb=strlen(b1);
        for(i=0;i<kb;i++)
            b[i]=b1[kb-i-1]-'0';
        if(ka>kb)
            k=ka;
        else
            k=kb;
        for(i=0;i<k;i++)
            c[i]=a[i]+b[i];
        for(i=0;i<k;i++)
            if(c[i]>=10)
            {
                c[i+1]+=c[i]/10;
                c[i]%=10;
            }
            printf("Case %d:\n",j+1);
            printf("%s + %s = ",a1,b1);
            if(c[k]==0)
                k--;
            for(i=k;i>=0;i--)
                printf("%d",c[i]);
            if(j==n-1)
                printf("\n");
            else
                printf("\n\n");
    }
    return 0;
}
