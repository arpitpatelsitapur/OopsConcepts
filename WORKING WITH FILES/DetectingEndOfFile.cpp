// detecting end of file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream fout;
	fout.open("Detection.txt");
	char word[25];
	for(int i=1;i<=5;i++){
		cout<<"Enter word you want to write in "<<i<<" line : ";
		cin>>word;
		fout<<word<<endl;
	}
	fout.close();
	ifstream fin("Detection.txt");
	for(int i=1;i<=50;i++){
		if(!fin.eof()){
		   fin>>word;
		   cout<<word<<endl;
		   //exit (1);
	    }
	    /*else{
	    	break;
		}*/
		//cout<<endl;
	}
	fin.close();
	fout.open("Detection2.txt");
	char word2[25];
	for(int i=1;i<=5;i++){
		cout<<"Enter word you want to write in "<<i<<" line : ";
		cin>>word2;
		fout<<word2<<endl;
	}
	fout.close();
    fin.open("Detection2.txt");
	while(fin){
		fin>>word2;
		cout<<word2<<endl;
	}
	fin.close();
	return 0;
}
