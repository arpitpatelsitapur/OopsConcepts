// writing data of marks of students in binary form
#include<iostream>
#include<iomanip>       // for manipulators
#include<fstream>       // for file handling
using namespace std;
class student{
	int rollno;
	char name[20];
	int marks;
	public:
		void readdata(){
			cout<<"Enter roll no of stdent : "; cin>>rollno;
			cout<<"Enter name of student : "; cin>>name;
			cout<<"Enter marks of student : "; cin>>marks;
		}
		void writedata(){
			cout<<setw(6)<<rollno<<setw(20)<<name<<setw(8)<<marks<<endl;
		}
};
int main(){
	fstream file;
	file.open("DataInBinaryForm.dat",ios::in | ios::out | ios::binary);
	student stud[5];
	for(int i=0;i<3;i++){
		stud[i].readdata();
		file.write((char*) & stud[i],sizeof(stud[i]));
	}
	cout<<setw(6)<<"Rollno"<<setw(20)<<"Name"<<setw(8)<<"Marks"<<endl;
	for(int i=0;i<3;i++){
		stud[i].writedata();
		file.read((char*) & stud[i],sizeof(stud[i]));
	}
	file.close();
	return 0;
}
