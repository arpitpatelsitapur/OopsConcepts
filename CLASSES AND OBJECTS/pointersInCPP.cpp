#include<iostream>
using namespace std;
class M{                          //defining class
	int x,y;                      //class data member
	public:
		void  get_data(int a,int b) //class member function
	    {
			x=a;
			y=b;
		}
	friend int sum(M n);	        // friend function
};
int sum(M n){                       // definition of friendly function
	int M::*px=&M::x;               // pointer to member x
	int M::*py=&M::y;               // pointer to member y
	M *pn=&n;                       // pointer to object n
	int s=n.*px+n.*py;              // accessing class data member using pointer to member 
    //int s=pn->*px+pn->*py;        // accessing dat member using pointer to object 
    //int s=n.*px+pn->*py;          // accessing data members using pointer to member and pointer to object
    //int s=n.x+n.y;                // accessing dat members using dot operators
	return s;
}
int main(){
	M N;                                 // declaration of object N
	void (M::*pf)(int,int)=&M::get_data; // pointer to member function
	//N.get_data(5,10);                  // passing value to member function using dot operator
	(N.*pf)(5,10);                       // passing values to member function  by pointer to member function
	//M *pN=&N;                          // pointer to object
	//(pn_>*pf)(5,10);                   // passing values member function by pointer to object
	cout<<"The result is "<<sum(N);      // calling friend function
	return 0;
}





