#include<iostream>
using namespace std;
class String{
	char *name;
	int length;
	public:
		String(){
			length=0;
			name=new char[length+1];
		}
		String (char *s)                        // dynamic constructor
		{
			length=strlen(s);
			name=new char[length+1];
			strcpy(name,s);
		}
		void display(void){
            cout<<name<<endl;
        }
		void join(String *a,String *b){
			length=strlen(a)+strlen(b);
			delete name;
			name= new char[length+1];
			strcpy(name,a.name);
			strcat(name,b.name);
		}
};
int main(){
	char first[30];
	cout<<"Enter first name :";
	cin>>first;
	String name1(first);
	cout<<"Enter last name :";
	cin>>first;
	String name2(first);
	String C;
	C.join(name1,name2);
	C.display();
}
