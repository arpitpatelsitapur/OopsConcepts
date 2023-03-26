// rethrowing exception
#include<iostream>
using namespace std;
void divide(int x,int y){
	int m;
	try{
		if(y!=0){
			cout<<"Division is "<<x/y<<endl;
		}
		else {
			throw m;
		}
	}
	catch(int m){
		cout<<"You entered zero."<<endl;
		throw;
	}
}
int main(){
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	try{
		divide(a,b);
	}
	catch(int){
		cout<<"Error occured!!!!"<<endl;
	}
	return 0;
}
