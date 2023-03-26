#include<iostream>
using namespace std;
int add(int a,int b){
	return a+b;
}
int add(int a,int b, int c){
	return a*b*c;
}
int add(double x,double y){
	return x-y;
}
double add(int x, double y){
	return x/y;
}
int main(){
	cout<<add(5,10)<<endl;
	cout<<add(2,3,4)<<endl;
	cout<<add(8.5,5.25)<<endl;
	cout<<8.5-5.25<<endl;
	cout<<add(15,7.0);
	return 0;
}
