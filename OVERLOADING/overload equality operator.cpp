//overloading of == operator 
#include<iostream>
using namespace std;
class student{
	int marks;
	public:
		student(int a){
			marks=a;
		}
	   void operator==(student x);	
};
void student::operator==(student x){
	if(marks==x.marks){
		cout<<"The marks of students are same."<<endl;
	}
	else
        cout<<"NOt same!!!!!"<<endl;
}
int main(){
	student A(40),B(40);
	A.operator==(B);
	return 0;
}
