#include<iostream>
using namespace std;

void swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	cout<<x<<" "<<y<<" "<<*x<<" "<<*y<<endl;
}

int main(){
	int a=10,b=20;
	cout<<&a<<" "<<&b<<endl;
	swap(&a,&b);
	return 0;
}
