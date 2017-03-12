#include<stdio.h>
#define MAX 500001   //这题数据求到这里就可以了
 
int sum[MAX];
int flag[1001];

void init()   //筛选法算出1000内存在的的因子和
{
    int i,j;
    for(i=1;i<=MAX/2;++i)  //不知道为啥 这里开到刚超出1000了就不对
        for(j=i+i;j<MAX;j+=i)
            sum[j]+=i;
    for(i=1;i<MAX;++i)
        if(sum[i]<=1000)
            flag[sum[i]]=1;
}

int main()
{
    int T,n;
    init();
//    printf("%d\n",sum[500000]);
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        if(flag[n])
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}
