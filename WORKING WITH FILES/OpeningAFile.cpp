// lab exp no 36.   program to open a file to write and read data
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	//writing data to file
	ofstream outf("ITEM.html");
	cout<<"Enter item name : ";
	char name[30];
	cin>>name;
	outf<<name<<endl;
	cout<<"Enter item cost : ";
	float cost;
	cin>>cost;
	outf<<cost<<endl;
	outf.close();
	//reading data from file
	ifstream inf("ITEM.html");
	inf>>name;
	inf>>cost;
	cout<<endl;
	cout<<"Item name : "<<name<<endl;
	cout<<"Item cost : "<<cost<<endl;
	inf.close();
	
	return 0;
}
