#include<iostream>
using namespace std;
class integer{
	int m,n;
	public:
		//integer(){}                     // do nothing constructor 
		integer(int a,int b);             // constructor with parameters
		integer()                         // constructor with no parameters
		{                        
			m=0;n=0;
		}
		void display(){
			cout<<"m = "<<m<<endl;
			cout<<"n = "<<n<<endl;
		}
};
integer::integer(int a,int b=5)           // constructor with default arguments
{          
	m=a;n=b;
}
int main(){
	integer X;
	integer Y(2,3);                      // implicit call of constructor
	Y.display();
	integer Z=integer (5,10);            // explicit call of constructor
	//integer Z(5,10);                   // implicit call of constructor
	Z.display();
	int p,q;
	cout<<"Enter p and q "<<endl;
	cin>>p>>q;
	integer N(p,q);
	N.display();
	integer M(10);
	M.display();
	return 0;
}
