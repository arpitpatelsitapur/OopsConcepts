// program with overoading of function call operator
#include<iostream>
using namespace std;
class Distance{
	double  feet;
	double inches;
	public:
		void display(){
			cout<<"The distance is "<<feet<<" fts and "<<inches<<" inches."<<endl;
		}
		Distance(double a, double b){
			feet =a;inches=b;
	    }
	    Distance(){
	        feet=0;inches=0;
	    }
		Distance operator ()(int a,int b,int c){   //operator function
			Distance t;
			t.feet=a+b+c;                        //random operation
			t.inches=a-b+c;                      //random operation
			return t;
		}	
};
int main(){
	Distance A(5,10),B,C;
	A.display();
	B.display();
	C=A(10,10,10);
	C.display();
	return 0;
}
