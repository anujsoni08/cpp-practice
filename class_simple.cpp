#include<iostream>

using namespace std;

class Rectangle {
	private:
		int length;
		int breadth;
	
	public:
		void setLength(int l){
			length = l;
		}
		
		int getLength(){
			return length;
		}
		
		void setBreadth(int b){
			breadth = b;
		}
		
		int getBreadth(){
			return breadth;
		}
		
		int area(){
			return length*breadth;
		}
		
		int perimeter(){
			return 2*(length+breadth);
		}
};

int main(){
   Rectangle *r = new Rectangle;
   r->setLength(12);
   r->setBreadth(10);
   cout<<r->area()<<endl;
   cout<<r->perimeter()<<endl;
   cout<<r->length<<endl;
   return 0;	
}
