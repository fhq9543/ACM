#include <iostream>
#include <string>
#include <memory>
using namespace std;
int main()
{    string str;    
char c[5]={'a','e','i','o','u'};   
 int n,len,a[5],i,j,flag(0);   
 cin>>n; 
 getline(cin,str);   
 while(n--){       
 memset(a,0,sizeof(a));     
   getline(cin,str);      
  len=str.length();      
  for(i=0;i<len;i++){          
  for(j=0;j<5;j++){       
         if(c[j]==str[i])a[j]++;      
      }        }       
 if(flag)cout<<endl;        
for(j=0;j<5;j++){        
    cout<<c[j]<<":"<<a[j]<<endl;        }  
      flag=1;    }   
 return 0;}

