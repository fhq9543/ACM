#include<stdio.h>
#include<string.h>
int main()
{        
    int i=0,n=0,num=0;        
    char a[10000]={'\0'};        
    scanf("%d",&n);        
    getchar();        
    while(n)        
    {                
        gets(a);               
        for(i=0;i<strlen(a);i++)                        
            if(a[i]<0)                               
                num++;                
        printf("%d\n",num/2);                
        num=0;                
        n--;        
    }        
    return 1;
}
