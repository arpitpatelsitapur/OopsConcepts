           // less than or equal to (<=) operator overloading
#include<iostream>
using namespace std;
class student{
	int rank;
	char name[25];
	public:
		void getdata(){
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter rank : ";
			cin>>rank;
		}
		int operator <=(student &y){
			if(rank<=y.rank)
				return 1;
			else 
			    return 0;
		}
};
int main(){
	student A,B;
	cout<<"Enter details of  1st student :::: \n";
	A.getdata();
	cout<<"Enter details of  2nd student :::: \n";
	B.getdata();
	if(A<=B)
		cout<<"The rank of 1st student is better than that of 2nd."<<endl;
	else
	    cout<<"The rank of 2nd student is better than that of 1st."<<endl;
	return 0;
}
