#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string str = "Welcome";
	int count = 0;
//	for(int i=0;str[i]!='\0';i++){
//	count++;	
//	}
    string::iterator it;
    for(it = str.begin();it!=str.end();it++){
	count++;	
	}
	cout<<count<<endl;
}
