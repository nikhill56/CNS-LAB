// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int q,a,xa,xb;
    cout << "Enter q : ";
    cin >> q;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter Xa and Xb : ";
    cin >> xa >> xb;
    int ya=1,yb=1;
    
    ya=pow(a,xa);
    ya=ya%q;
    
    yb=pow(a,xb);
    yb=yb%q;
    
    cout << "Ya : " << ya << endl << "Yb : " << yb << endl;
    
    int ka=1,kb=1;
    
    ka=pow(yb,xa);
    ka=ka%q;
    
    kb=pow(ya,xb);
    kb=kb%q;
    
    cout << "Ka : " << ka << endl << "Kb : " << kb << endl;
   
    
    return 0;
}
