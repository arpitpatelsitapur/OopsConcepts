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
		int operator >=(student &y)                  // operator function
		{
			if(rank>=y.rank)
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
	if(A>=B)                                         // operator function (overloaded operator) calling
		cout<<"The rank of 2nd student is better than that of 1st."<<endl;
	else
	    cout<<"The rank of 1st student is better than that of 2nd."<<endl;
	return 0;
}
