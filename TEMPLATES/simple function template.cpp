// simple function template
#include<iostream>
using namespace std;
template<class T>
void swapping(T &a,T &b){
	T c=a;
	a=b;
	b=c;
}
int main(){
	int x=5;
	int y=10;
	cout<<"Before swapping :: "<<endl;
	cout<<"x = "<<x<<" y = "<<y<<endl;
	swapping(x,y);
	cout<<"After swapping :: "<<endl;
	cout<<"x = "<<x<<" y = "<<y<<endl;
	return 0;
}
