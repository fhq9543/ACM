#include<stdio.h>
int main()
{    
    __int64 f[31]={1,0,3,0,11};    
    int i;    
    int s=1;    
    for(i=5;i<31;i++)    
    {     
        if(i%2==0)     
        {
            s+=f[i-4];f[i]=3*f[i-2]+2*s;     
        }     
        else
            f[i]=0;    
    }    
    while(scanf("%d",&i)&&i!=-1)
        printf("%I64d\n",f[i]);    
    return 0;
}


