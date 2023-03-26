#include<iostream>
using namespace std;
class Time{
	int hr,min;
	public:
		void display(){
			cout<<"Time is "<<hr<<" hours "<<min<<" minutes."<<endl;
		}
		Time(){
			hr=0;min=0;
		}
		Time(int x,int y){                  // parameterized constructor
			hr=x;min=y;
		}
		Time(Time &I){                      // copy constructor
			hr=I.hr;
			min=I.min;
		}
	friend Time sum(Time &a,Time &b);        // friend function declaration
};
Time sum(Time &a,Time &b){                   // friend funvction definition 
	Time t;
	t.min=a.min+b.min;
	t.hr=a.hr+b.hr+(t.min/60);
	t.min=t.min%60;
	return t;
}
int main(){
	Time T1(10,45);                        // implicit call of constructor
	//Time T2(T1);                         // implicit call of copy constructor
	Time T2=T1;                            // legal
	T2.display();
	// T3=T1;                              // illegal because object not declared
	Time T4;
	Time T5;
	T4=sum(T1,T2);                         // call of friend function
	T4.display();
	T5=T4;                                 // legal because object already declared
	T5.display();
	return 0;
}
