#include<stdio.h>
void main()
{
    int i,n,sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+i;
		} 
            printf("%d\n\n",sum);
        sum=0;
    }    
}