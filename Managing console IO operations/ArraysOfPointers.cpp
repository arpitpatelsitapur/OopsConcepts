// finding a name from a list of students' names
#include<iostream>
#include<string>
using namespace std;
int main(){
	char *ptr[5]={"arpit",
	              "patel",
				  "tygore",
				  "lio",
				  "deon"};
	char name[25];
	cout<<"Enter the name :";
	cin>>name;
	for(int i=0;i<5;i++){
		if(!strcmp( name, *ptr[i] )){
			cout<<"available"<<endl;
			break;
		}
		if(i==5){
			cout<<"not available"<<endl;
		}
	}
	
	return 0;
}
