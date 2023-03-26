// simple try catch mechanism
#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	try{
		if(b!=0){
			c=a/b;
			cout<<"The division is "<<c<<endl;
		}
		else{
			throw (b);
		}
	}
	catch(float ){
		cout<<"ERROR occured!!!"<<endl<<"You entered 0."<<endl;
	}
	return 0;
}
