#include<iostream>
using namespace std;
int main()
{
    int i,n;
    __int64 f[41]={0,3,8};    
    while(cin>>n)
    {
        for(i=3;i<=n;++i)
            f[i]=2*(f[i-1]+f[i-2]);//如果第i-1位是O,则有f[i-2]*2种，若不是，则有f[i-1]*2；
        printf("%I64d\n",f[n]);
    }
    return 0;
}//main

