#include<iostream>
using namespace std;
int main(){
	string plain;string key;string result;
	cin>>plain;cin>>key;
	for(int j=0;j<plain.size();j++){
		char c=(((plain[j]-'a'+key[j%key.size()]-'a')%26)+'a');
		result.push_back(c);
	}
	cout<<result;

	string decrypt;
	cout<<endl;

	for(int j=0;j<plain.size();j++){
		char c=((((result[j]-key[j])+26)%26)+'a');

		decrypt.push_back(c);
	}
	cout<<decrypt;
	return 0;	
}
