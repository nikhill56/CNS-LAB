#include<bits/stdc++.h>
using namespace std;
int main() {
    string plain;
    cin>>plain;
    int key;
    cin>>key;
    int i,j,flag=0;
    vector<vector<char>> a (key,vector<char>(plain.size(),' '));
    j=0;
    for(i=0;i<plain.size();i++){
        a[j][i]=plain[i];
        if(j==key-1){
            flag=1;
        }else if(j==0){
            flag=0;
        }
        if(flag==0){
            j++;
        }else{
            j--;
        }
    }
    
    for(i=0;i<key;i++){
        for(j=0;j<plain.size();j++){
            if(a[i][j]!=' '){
                cout<<a[i][j];
            }
        }
    }
    cout<<endl;
    return 0;
}
