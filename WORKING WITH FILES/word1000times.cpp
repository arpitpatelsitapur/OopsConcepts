// writing a sentance 1000 times in docx file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outf;
    outf.open("word.html");
    for (int i=0;i<1000;i++){
        outf<<"A <div>Lorem34<\div> A"<<"\n";
        
    }
    outf.close();
    return 0;
}
