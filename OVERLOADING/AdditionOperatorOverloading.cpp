// addition operator overloading
#include<iostream>
using namespace std;
class number{
	int m;
	public:
		number(int a){
			m=a;
		}
		void display(){
			cout<<"The sum is : "<<m<<endl;
		}
		number operator +(number);
};
number number::operator +(number y){
        //return m+y.m;
		number z;
		z.m=m+y.m;
		return z;
}
int main (){
	number A(25);
	number B(15);
	number C=A+B;
	C.display();
	number D(50);
	number E=C+D;
	E.display(); 
	return 0;
}
