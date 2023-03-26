//testing throw restrictions
#include<iostream>
using namespace std;
void test(int x) throw(int,double,char){
	if(x==0)
	  throw 'x';
	else if(x==1)
	  throw x;
	else if(x==-1)
	  throw 1.2;
	cout<<"Function ends now."<<endl;
}
int main(){
	try{
		cout<<"Testing throw restrictions ..."<<endl;
		cout<<"x==0"<<endl;
		test(0);
		cout<<"x==1"<<endl;
		test(1);
		cout<<"x==-1"<<endl;
		test(-1);
	}
	catch(int m){
		cout<<"Integer is Exception."<<endl;
	}
	catch(float n){
		cout<<"Float is Exception."<<endl;
	}
	catch(char c){
		cout<<"Char is Exception."<<endl;
	}
	return 0;
}
