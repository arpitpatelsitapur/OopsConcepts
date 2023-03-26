//manipulation of pointers
#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *ptr=&a;
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<ptr<<endl;
	*ptr=*ptr/2;
	cout<<ptr<<endl;
	int *ptr1=&a;
	int **ptr2=&ptr1;
	cout<<ptr1<<endl;
	cout<<ptr2<<endl;
	return 0;
}
