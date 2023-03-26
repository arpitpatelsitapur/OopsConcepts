// using multiple try catch blocks in exception handling 
#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	float x=10.3;
	int y=10;
	try{
		
		if(age<18 && age!=0){
			throw (x);
		}
		else if(age==0 || age>=110){
		    cout<<"Person not counted as voter."<<endl;
		    cout<<x+y<<endl;
		    throw x+y;
		}
		else
		{
			throw (y);
		}
	}
	/*catch(float x){
		cout<<"You can't vote!!!"<<endl;
	}
	catch(int y){
		cout<<"You can vote."<<endl;
	}*/
	catch(...){
		cout<<"Exception occured."<<endl;
	}
	return 0;
}

