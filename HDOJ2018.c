#include<stdio.h>
int main()
{    int f[56]={1,1,2,3},i,n; 
   for(i=4;i<56;i++)      
       f[i]=f[i-1]+f[i-3];   
   while(scanf("%d",&n)!=EOF&&n!=0)        
       printf("%d\n",f[n]);    
   return 0;
}
