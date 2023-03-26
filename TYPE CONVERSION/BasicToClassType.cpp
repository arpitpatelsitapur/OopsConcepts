// Type conversion basic to class type
#include<iostream>
using namespace std;
class student{
	int rollno;
	int marks;
	public:
		student(){
			rollno=0;marks=0;
		}
		student(int a,int b){
			rollno=a;marks=b;
		}
		void display(){
			cout<<"Roll no : "<<rollno<<" & Marks : "<<marks<<endl;
		} 
		student (int a){                           //constructor : basic to class
			rollno=a;
			marks=a*10;
		}
};
int main(){
	student A(2,40);
	A.display();
	int x=5;
	A=x;                                      //basic to class type conversion
	A.display();
	return 0;
}
