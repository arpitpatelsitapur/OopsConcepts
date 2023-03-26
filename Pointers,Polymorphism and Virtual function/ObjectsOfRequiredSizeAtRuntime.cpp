// creating objects with required size on runtime
#include<iostream>
#include<string.h>
using namespace std;
class city{
	char *name;
	int len;
	public:
		city(){
			len=0;
			name = new char[len+1];
		}
		void getname(){
			char* s;
			s=new char[30];
			cout<<"Enter the name of the city : ";
			cin>>s;
			len=strlen(s);
			name = new char[len+1];
			strcpy(name,s);
		}
		void putname(){
			cout<<"City Name :: "<<name<<endl;
		}
};
int main(){
	city*cptr[10];
	int n=1;
	int option;
	do{
		cptr[n]=new city;
		cptr[n]->getname();
		n++;
		cout<<"Doyou want to enter one more name ? \n (Enter 1 for YES and 0 for NO)\n";
		cin>>option;
	}while(option);
	cout<<endl;
	for(int i=1;i<n;i++){
		cptr[i]->putname();
	}
	return 0;
}
