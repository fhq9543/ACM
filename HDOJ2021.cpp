#include <iostream>
using namespace std;
int main()
{    int n;    
while (cin >> n && n != 0)   
 {        int m[100]; // 开100               
 for (int i = 0; i < n; i++)        
{            cin >> m[i];        }        
int sum [100]; // 开100       
 int sar = 0;        

for (int j = 0; j < n; j++)       
 {            int a = 0,b = 0,c = 0,d = 0,e = 0,f = 0;            
a = m[j]/100;            
b = (m[j] - a*100)/50;           
 c = (m[j] - a*100 - b*50)/10;           

 d = (m[j] - a*100 - b*50 - c*10)/5;            
e = (m[j] - a*100 - b*50 - c*10 - d*5)/2;            
f = (m[j] - a*100 - b*50 - c*10 - d*5 - 2*e);            
sum[j] = a + b + c + d + e + f;            
sar += sum[j];        }        
cout << sar << endl;    }    
return 0;}
