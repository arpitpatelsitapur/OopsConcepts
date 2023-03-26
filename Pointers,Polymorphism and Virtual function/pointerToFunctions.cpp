//pointers to functions
#include<iostream>
using namespace std;
typedef void (*funptr)(int ,int);
void add(int i, int j){
	cout<<i<<"+"<<j<<"="<<i+j<<endl;
}
int main(){
	funptr ptr;
	ptr=&add;
	ptr(1,2);
	return 0;
}
