// get and put functions
#include<iostream>
using namespace std;
int main (){
	int count =0;
	char c;
    cout<<"Enter text :(get function used)"<<endl;
	cin.get(c);
	cout<<"(put function used)"<<endl;
	cout.put(c);
	cout<<"\nYou entered :\n";
	while(c!='\n'){
		cout.put(c);
		count++;
		cin.get(c);
	}	
	return 0;
}
