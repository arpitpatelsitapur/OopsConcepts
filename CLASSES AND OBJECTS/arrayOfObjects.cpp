// array of objects
#include<iostream>
using namespace std;
class student{
	int rollno;
	char name[20];
	int marks;
	public:
		void getdata(){
			cout<<"Enter roll no of stdent : "; cin>>rollno;
			cout<<"Enter name of student : "; cin>>name;
			cout<<"Enter marks of student : "; cin>>marks;
		}
		void putdata(){
			cout<<"Enter roll no of stdent : "<<rollno<<endl;
			cout<<"Enter name of student : "<<name<<endl;
			cout<<"Enter marks of student : "<<marks<<endl<<endl;
		}
};
int main(){
	student stud[5];
	for(int i=0;i<5;i++){
		stud[i].getdata();
	}
	for(int i=0;i<5;i++){
		stud[i].putdata();
	}
	return 0;
}
