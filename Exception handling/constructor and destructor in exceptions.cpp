//constructor and destructor in exception handling
#include<iostream>
using namespace std;
class name{
	public:
		name(){
			cout<<"Constructor invoked."<<endl;
		}
		~name(){
			cout<<"Destructor invoked."<<endl;
		}
};
int main(){
	try{
		name Arpit;
		throw 10;
	}
	catch(int){
		cout<<"Exception occured."<<endl;
	}
	return 0;
}
