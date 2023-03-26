// learning concept of "this pointer "
#include<iostream>
using namespace std;
class person{
	int age;
	public:
		void get_age(){
			cout<<"Enter Age (in years) : ";
			cin>>age;
		}
		int access_age(){
			return age;
		}
		person greater (person &x);
};
person person::greater(person &x){
	if(x.age>age)
	    return x;
	else 
	    return *this;
}
int main(){
	person A,B;
	cout<<"Person A :::::::::"<<endl;
	A.get_age();
	cout<<"Person B :::::::::"<<endl;
	B.get_age();
	person max=A.greater(B);
	if(max.access_age()==A.access_age())
	{
		cout<<"Person A is Elder."<<endl;
	}
	else
        cout<<"Person B is Elder."<<endl;
	return 0;
}

