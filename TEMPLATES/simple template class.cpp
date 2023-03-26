// simple template class
#include<iostream>
using namespace std;
template<class T>
class d{
	T x;
	public:
		d(){x=5;}                         // default constructor
		d(T a){x=a;}                      // parameterized constructor
		void sum(d b){
			cout<<"sum = "<<x+b.x<<endl;
		}
};
int main(){
	d<float>A;                             // object of template class using default constructor
	d<float>B(10.4);                         // object of template class using parameterized constructor
	A.sum(B);
	return 0;
}
