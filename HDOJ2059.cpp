#include <iostream>
#include <string>

using namespace std;

#include <algorithm>

int main()
{
    int l;
    int n,c,t;
    int vr, vt1, vt2;
    int ns[102];
    int i,j,len;
    double dp[102],tmp;
    while(scanf("%d", &l)!=EOF){
        scanf("%d%d%d", &n, &c, &t);
        scanf("%d%d%d", &vr, &vt1, &vt2);
        for(i = 1; i <= n; i ++){
            scanf("%d", &ns[i]);
        }
        sort(ns, ns+n);
        ns[++ n] = l;
        ns[0] = 0;
        //dp
        memset(dp, 0, sizeof(dp));
        for(i = 1; i <= n; i ++){
            double min = 0xffffff;
            for(j = 0; j < i; j ++){
                len = ns[i] - ns[j];
                tmp = len > c ? (1.0*c/vt1+1.0*(len-c)/vt2) : (1.0*len/vt1);
                if(j)tmp += t;
                if(tmp+dp[j]<min)min = tmp+dp[j];
            }
            dp[i] = min;
        }
        if(dp[n]<1.0*l/vr)
            printf("What a pity rabbit!\n");
        else 
            printf("Good job,rabbit!\n");
    }
    return 0;
}
