#include<iostream>
using namespace std;
class A
{
	public:
	    int number;                                                //data member of class
	public:	
	    void getdata(){                                            //member function of class
	    	cout<<"Enter the value : ";
	    	cin>>number;
		}
};                                 
int main(){
	A x,y;
	x.getdata();
	y.getdata();
	int A::* ip= & A::number;                                    //pointer to data member of a class              
	cout<<"Number at object x : "<<x.*ip<<" or "<<x.number<<endl;//accessing number by pointer 
	cout<<"Number at object y : "<<y.*ip<<" or "<<y.number<<endl;//accessing number by pointer 
	return  0;
}












