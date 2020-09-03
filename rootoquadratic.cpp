#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,c;
	float root;
	cin>>a>>b>>c;
	root=(float)((-b+(sqrt(b*b-4*a*c)))/2*a);
	cout<<root;
}
