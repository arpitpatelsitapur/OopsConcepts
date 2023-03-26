//objects as functiion arguments
#include<iostream>
using namespace std;
class time{
	int hr;
	int min;
	public:
		void get_time(int a,int b){
			hr=a;
			min=b;
		}
		friend void sum(time T1,time T2);        //objects as friendly function arguments
};
void sum(time T1,time T2){
	time T3;
	T3.min=T2.min+T1.min;
	T3.hr=T2.hr+T1.hr+(T3.min/60);
	T3.min=T3.min%60;
	cout<<"Time is "<<T3.hr<<" hrs "<<T3.min<<" minutes"<<endl;
}
int  main(){
	time T1,T2;
	T1.get_time(5,45);
    T2.get_time(6,30);
    sum(T1,T2);                      // calling friendly functions And objects {pass by value}
	return 0;
}
