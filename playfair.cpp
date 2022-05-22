#include <bits/stdc++.h>
using namespace std;
int main(){
    
   string s,plain;
   getline(cin,plain);
   int i,j,k,n;
   string key;
   cin>>key;
   vector<vector<char>>a(5,vector<char>(5,' '));
   map<char,int>mp;
   for(i=0;i<plain.size();i++){
       if(plain[i]!=' '){
           s+=plain[i];
       }
   }
   
   int pi,pj;
   k=0;n=5;
   
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           while(mp[key[k]]>0 && k<key.size()){
               k++;
           }
           
           if(k<key.size()){
               a[i][j]=key[k];
               mp[key[k]]++;
               pi=i;
               pj=j;
           }
           if(k==key.size()){
               break;
           }
       }
       if(k==key.size()){
           break;
       }
   }
   
    k=0;
    
    for(;i<n;i++){
        for(;j<n;j++){
            while(mp[char(k+'a')]>0 && k<26){
                k++;
            }
            
            if(char(k+'a')=='j'){
                j--;
                k++;
                continue;
            }
            
            if(k<26){
                a[i][j]=char(k+'a');
                mp[char(k+'a')]++;
            }
        }
        j=0;
    }
    
    string ans;
    if(s.size()%1==1){
        s+='x';
    }
    for(i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            s[i+1]='x';
        }
    }
    
    map<char,pair<int,int>>mp2;
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mp2[a[i][j]]=make_pair(i,j);
        }
    }
    
    for(i=0;i<s.size()-1;i+=2){
        int x1=mp2[s[i]].first;
        int y1=mp2[s[i]].second;
        int x2=mp2[s[i+1]].first;
        int y2=mp2[s[i+1]].second;
        
        if(x1==x2){
            ans+=a[x1][(y1+1)%5];
            ans+=a[x2][(y2+1)%5];
        }else if(y1==y2){
            ans+=a[(x1+1)%5][y1];
            ans+=a[(x2+1)%5][y2];
        }else{
            ans+=a[x1][y2];
            ans+=a[x2][y1];
        }
    }
    
    cout<<ans;
   return 0;
}
