//                    Swapping Private Data Of Classes Program 5.10
//                               CALL BY REFERENCE
#include<iostream>
using namespace std;
class ABC ;
class XYZ{
	int x ;
    public:
   	void getdata(int i){
   		x=i;
	   }
   	void display(void){
   	    cout << x <<endl;	
	}
   	friend void exchange(XYZ &,ABC &);
};
class ABC{
	int a ;
    public:
   	void getdata(int i){
   		a=i;
	   }
   	void display(void)
   	{
   	    cout << a<<endl ;	
	}
   	friend void exchange(XYZ &,ABC &);
};
void exchange(XYZ &m, ABC &n){
	int temp ;
	temp = m.x ;
	m.x = n.a ;
	n.a = temp ;
};
int main(){
	ABC A ;
	XYZ X ;
	A.getdata(50);
	X.getdata(80);
	cout <<"Value before exchange : "<<endl;
	A.display();
	X.display();
	exchange(X,A);  // Swapping
	cout <<"Value after exchange : "<<endl;
	A.display();
	X.display();
	return 0;	
}
