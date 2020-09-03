#include<iostream>
using namespace std;

int main(){
	int a[5]={2,4,6,8,10};
	int *p = a,*q=&a[4];
	
	cout<<p<<" "<<*p<<" "<<q<<" "<<*q<<endl;
	
//	cout<<p<<" "<<*p<<endl;
//	p=p+1;
//	cout<<p<<" "<<*p<<endl;
//	p=p-1;
//	cout<<p<<" "<<*p<<endl;
//    for(int i=0;i<5;i++){
//    	cout<<i[a]<<" "<<a<<" "<<i<<" "<<endl;
//	}
	return 0;
}
