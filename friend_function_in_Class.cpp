#include<iostream>

using namespace std;

class Complex {
	private:
		int real;
		int img;
	
	public:
		
		Complex(int r=0,int i=0){
			real = r;
			img=i;
		}
		
//		Complex add(Complex c1){
//			Complex temp;
//			temp.real = c1.real + real;
//			temp.img=c1.img + img;
//			return temp;
//		}

//        Complex operator+(Complex c1){
//			Complex temp;
//			temp.real = c1.real + real;
//			temp.img=c1.img + img;
//			return temp;
//		}

        friend Complex operator+(Complex c1,Complex c2);
		
		void display(){
			cout<<real<<" "<<img<<endl;
		}
};

    Complex operator+(Complex c1,Complex c2){
			Complex temp;
			temp.real = c1.real + c2.real;
			temp.img=c1.img + c2.img;
			return temp;
		}

int main(){
   Complex c1(5,10),c2(6,6),c3;
   c1.display();
   c2.display();
   // c3 = c1.add(c2);
   c3 = c1+c2;
   c3.display();
   return 0;	
}
