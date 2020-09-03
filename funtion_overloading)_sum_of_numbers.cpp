#include<iostream>
using namespace std;


//1. write a sum() function here to add 2 integer
//2. write a sum() function here to add 2 floats
//3. write a sum() function here to add 3 integer

int sum(int a,int b){
	return a+b;
}

float sum(float a,float b){
	return a+b;
}

int sum(int a,int b,int c){
	return a+b+c;
}

int main()
{
    cout<<sum(10,5);
    cout<<sum(12.9f,8.3f);
    cout<<sum(10,20,30);
}

