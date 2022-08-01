// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    
   int p,q;
   cin>>p>>q;
   
   int n=p*q;
   int phin = (p-1)*(q-1);
   
   int e=2;
   
   for(;e<phin;e++){
       if(__gcd(e,phin)==1){
           break;
       }
   }
   int d=1;
   
   while((d*e)%phin!=1){
       d++;
   }
   cout<<e<<" "<<d<<endl;
   
   int m;
   cin>>m;

   int c = (pow(m,e));
   c=c%n;
   
   cout<c<<endl;
   
   int D = pow(c,d);
   D=D%n;
   
   cout<<D<<endl;
   
   
    
    return 0;
}
