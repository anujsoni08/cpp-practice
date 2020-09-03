#include<iostream>
using namespace std;

int &func(int &a){
	cout<<a<<endl;
	return a;
}

int main(){
	int x=10;
	func(x)=25;
	cout<<x<<endl;
}
