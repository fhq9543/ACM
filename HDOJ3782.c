#include"stdio.h"
#define N 1000

int main()
{
    int n,c;
    while(1)
    {
        c=0;
        scanf("%d",&n);
        if(n==0)
            return 0;
        while(n>1)
        {
            if(n%2==0)
                n/=2;
            else
                n=(3*n+1)/2;
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
