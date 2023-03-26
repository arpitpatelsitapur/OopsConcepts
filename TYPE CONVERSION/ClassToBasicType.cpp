//TYpe conversion class  type to basic type
#include<iostream>
using namespace std;
class employee{
	int grp;
	int amount;
	public:
		employee(){
			grp=0;amount=0;
		}
		employee(int a,int b){
			grp=a;amount=b;
		}
		void display(){
			cout<<"Employee's Group is : "<<grp<<" & amount given to group is : "<<amount<<endl;
		}
		operator int (){                          // overloaded casting operator function
			int temp;
			temp=grp*amount*30;
			return temp;
		}
};
int main(){
	employee X(2,2500);
	X.display();
	int A;
	//A=X;
	X.operator int(A);
	cout<<"Total salary is  : "<<A<<endl;
}
