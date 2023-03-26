// Detecting end of file using eof() function
#include<iostream>
#include<fstream>
using namespace std;
class table{
	public:
	    int  row;
	    int column;
		void getdata(){
			cout<<"Enter row number : ";
			cin>>row;
			cout<<"Enter column number : ";
			cin>>column;
		}
};
int main(){
	table A,B,C;
	A.getdata();
	B.getdata();
	C.getdata();
	fstream filewrite;
	filewrite.open("Table.txt",ios::out);  // writing mode
	filewrite<<A.row<<" "<<A.column<<endl;
	filewrite<<B.row<<" "<<B.column<<endl;
	filewrite<<C.row<<" "<<C.column<<endl;
	filewrite.close();
	fstream fileread;
	fileread.open("Table.txt",ios::in);   // reading mode
	/*if(!fileread.eof()){*/
		fileread>>A.row>>A.column;
		cout<<A.row<<" "<<A.column<<endl;
		fileread>>B.row>>B.column;
		cout<<B.row<<" "<<B.column<<endl;
		fileread>>C.row>>C.column;
		cout<<C.row<<" "<<C.column<<endl;
	//}
	fileread.close();
	return 0;
}
