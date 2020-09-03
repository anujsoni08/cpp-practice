#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int &y = x;
    cout<<x<<" "<<y<<endl;
    x++;
    y++;
    cout<<x<<" "<<y<<endl;
    int a;
    a = x;
    x = 25;
    cout<<x<<" "<<y<<" "<<a<<endl;
    cout<<&x<<" "<<&y<<endl;
	return 0;
}
