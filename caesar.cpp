#include <iostream>
using namespace std;
int main() {

    string plain;
    cin>>plain;
    int key;
    cin>>key;
    
    string encrypt="";
    
    for(int i=0;i<plain.length();i++){
        
        if(isupper(plain[i])){
            encrypt+=char(int(plain[i]+key-65)%26+65);
        }
        else
            encrypt+=char(int(plain[i]+key-97)%26+97);
    }
    
    cout<<encrypt;
    
    string decrypt;
    
    for(int i=0;i<plain.length();i++){
        if(isupper(encrypt[i])){
            decrypt+=char((int(encrypt[i]+(26-key)-65)%26)+65);
        }else{
            decrypt+=char((int(encrypt[i]+(26-key)-97)%26)+97);
        }
    }
    
    cout<<endl<<decrypt;
    return 0;
}
