// catching class type as an exception
#include<iostream>
#include<string.h>
using namespace std;
class error{
	int err_code;
	char *err_char;
	public:
		error(int a, char* d){
			err_code=a;
			int s=strlen(d);
			err_char=new char[s];
			strcpy(err_char,d);
		}
		void display(){
			cout<<"Error code : "<<err_code<<endl;
			cout<<"Error name : "<<err_char<<endl;
		}
};
int main(){
	try{
		error e(100,"This is a runtime error");
		throw e;
		//throw error (100,"This is a runtime error");
	}
	catch(error e){
		cout<<"Exception occured."<<endl;
		e.display();
	}
	return 0;
}
