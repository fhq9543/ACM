#include<stdio.h>
int main()
{ 
    char a[100]; 
    int b,c,d,i,j; 
    while(gets(a)) // 换成gets 
    {  
        if(a[0]==0) 
        {
            printf("\n");
            continue;
        } // 如果是空行, 直接换行继续  
        if(a[0]>='a'&&a[0]<='z') 
            printf("%c",a[0]-32); // 如果首字母小写, 则输出大写  
        else 
            printf("%c",a[0]); // 否则直接输出首字母  
        for(i=1;i<100;i++)  
        {   
            if(a[i]==32) // 如果是空格   
                if(a[i+1]>='a'&&a[i+1]<='z') 
                    a[i+1]=a[i+1]-32; // 下一个字母是小写, 则把他换成大写   
                if(a[i]=='\0') // 如果遇到行尾   
                    break; // 退出循环   
                printf("%c",a[i]); // 否则打印此字符  
        }  
        printf("\n"); 
    }
}
