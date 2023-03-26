// program for multiple inheritance
#include<iostream>
using namespace std;
class B1{
	int x;
	public:
		void getx(int a){x=a;}
		void display_x(){ 
		   cout<<"x = "<<x<<endl;
		}
		int access_x(){ return x;}
};
class B2{
	int y;
	public:
		void gety(int a){y=a;}
		void display_y(){ 
		   cout<<"y = "<<y<<endl;
		}
		int access_y(){ return y;}
};
class B1: public B1,private B2{
	/*public: getx();
	        display_x();
	        access_x();
	private: gety();
	        display_y();
	        access_y();*/
	int sum;
	public:
		void getdata(){
			getx(5);
			gety(10);
		}
	    void total(){
	    	sum=(access_x())+(access_y());
		}
		void display(){
			display_x();
			display_y();
			cout<<"Sum = "<<sum<<endl;
		}        
};
int main(){
	D d;
	d.getdata();
	d.total();
	d.display();
	return 0;
}
