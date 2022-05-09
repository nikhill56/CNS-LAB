#include<iostream>
using namespace std;
int main(){
	string plain;string key;string result;
	cin>>plain;cin>>key;
	int count=key.size(),i=0;
	if(plain.size()!=key.size()){
		while(count<plain.size()){
			key.push_back(key[i++]);
			count++;
		}
	}
	for(int j=0;j<plain.size();j++){
		char c=(((plain[j]-'a'+key[j]-'a')%26)+'a');
		result.push_back(c);
	}
	cout<<result;

	string decrypt;
	cout<<endl;

	for(int j=0;j<plain.size();j++){#include<iostream>
using namespace std;
int main(){
	string plain;string key;string result;
	cin>>plain;cin>>key;
	int count=key.size(),i=0;
	if(plain.size()!=key.size()){
		while(count<plain.size()){
			key.push_back(key[i++]);
			count++;
		}
	}
	for(int j=0;j<plain.size();j++){
		char c=(((plain[j]-'a'+key[j]-'a')%26)+'a');
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
		char c=((((result[j]-key[j])+26)%26)+'a');

		decrypt.push_back(c);
	}
	cout<<decrypt;
	return 0;	
}
