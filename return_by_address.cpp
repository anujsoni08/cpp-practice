#include<iostream>
using namespace std;

int* func(){
	int *p = new int[5];
	cout<<p<<" "<<*p<<" "<<&p<<endl;
	for(int i=0;i<5;i++){
		p[i]=5*i;
		cout<<p[i]<<" "<<" "<<&p[i]<<endl;
	}
	return p;
}

int main(){
	int *f= func();
	cout<<f<<" "<<*f<<endl;
	
	for(int i=0;i<5;i++){
		cout<<f[i]<<" "<<" "<<&f[i]<<endl;
	}
	return 0;
	
} 
