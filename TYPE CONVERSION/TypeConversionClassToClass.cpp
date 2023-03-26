//type conversion one class type to other class type
#include<iostream>
using namespace std;
class invent2;
class invent1{
	int code,num;
	float price;
	public:
		invent1(){
			code=0;num=0;price=0;
		}
		invent1(int a,int b,float c){
			code=a;num=b;price=c;
		}
		void display(){
		    cout<<"Item code is : "<<code<<endl<<"Item no is : "<<num<<endl<<"Item price is : "<<price<<endl;
		}
		int getcode(){ return code;}
		int getnum(){return num;}
		float getprice(){return price;}
		friend operator invent2(){                     //overloaded casting operator function in source class
			invent2 temp;
			temp.code=code;
			temp.value=price*num;
			return temp;
		}
};
class invent2{
	int code;
	float value;
	public:
		invent2(){
			code=0;value=0;
		}
		invent2(int a,float b){
		    code=a;value=b;
		}
		void display(){
			cout<<"Item code is: "<<code<<endl<<"Item total value is : "<<value<<endl;
		}
		friend invent1::operator invent2();
		/*invent2(invent1 X){                          // constructor function in destination class
			code=X.getcode();
			value=X.getprice()*X.getnum();
		}*/
};
int main(){
	invent1 obj1(10,25,258.80);
	invent2 obj2=obj1;
	obj1.display();
	obj2.display();
	return 0;
}
