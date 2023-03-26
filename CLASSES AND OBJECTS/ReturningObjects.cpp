#include<iostream>
using namespace std;
class complex{
	float real;
	float img;
	public:
		void get_data(){
			cout<<"Enter real part of complex number : ";
			cin>>real;
			cout<<"Enter imaginary part of complex number : ";
			cin>>img;
		}
		void putdata(){
			cout<<"The complex numbers is "<<real<<"+i("<<img<<")"<<endl;
		}
	complex sum(complex ,complex );
};
complex complex::sum(complex A, complex B){
	complex temp;
	temp.real=A.real+B.real;
	temp.img=A.img+B.img;
	return temp;
}
int main(){
	complex P,Q,R;
	cout<<"First complex number ::::\n";
	P.get_data();
	P.putdata();
	cout<<"Second complex number ::::\n";
	Q.get_data();
	Q.putdata();
	R=P.sum(P,Q);
	cout<<"Sum ::::\n";
	R.putdata();
	return 0;
}
