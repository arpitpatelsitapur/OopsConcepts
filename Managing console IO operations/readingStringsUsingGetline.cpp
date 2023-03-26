// reading strings using getline
#include<iostream>
using namespace std;
int main(){
	int size =20;
	char city[20];
	cout<<"Enter city name : ";
	cin>>city;
	cout<<city<<endl;
	cout<<"Enter city again : ";
	cin.getline(city,size);
	cout<<city<<endl;
	cout<<"Enter city again : ";
	cin.getline(city,size);
	cout<<city<<endl;
	return 0;
}
