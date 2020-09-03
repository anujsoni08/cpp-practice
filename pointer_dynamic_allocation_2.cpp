#include<iostream>
using namespace std;

int main(){
	int *p = new int[5];
	delete []p;
	p=new int[10];
	return 0;
}
