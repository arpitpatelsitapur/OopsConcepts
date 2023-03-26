//exception in operator overloaded function
#include<iostream>
using namespace std;
class complex{
	float real,img;
	public:
		complex(){real=2;img=3;}
		complex(float a,float b){real=a;img=b;}
		void display(){cout<<"The complex number is "<<real<<"+i"<<img<<endl;}
		void operator+(complex y);		
};
void complex::operator+(complex y){
	try{
		if(y.real==0 && y.img==0){throw 10;}
	    else{
		   complex temp;
		   temp.real=real+y.real;
		   temp.img=img+y.img;
		   throw temp;
	    }
	}
	catch(int){cout<<"Adding complex numbers with value zero is Exception!!!!"<<endl;}
}
int main(){
	try{
	   complex A,B(0,0);
	   A+B;  
    }
    catch(complex C){
    	C.display();
	}
	return 0;
}
