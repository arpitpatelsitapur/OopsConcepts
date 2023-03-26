// program for Hybrid inheritance
#include<iostream>
using namespace std;
class student{
    protected:
       int rollno;
    public:
       void getno(int a){
           rollno=a;
       }
       void displayno(){
           cout<<"Roll no : "<<rollno<<endl;
       }
};
class test:public student{
    protected:
      int sub1,sub2;     // int rollno;
    public:
      void getmarks(int a, int b){
        sub1=a;sub2=b;
      }
      void display(){
        cout<<"Marks of sub1 : "<<sub1<<endl;
        cout<<"Marks of sub2 : "<<sub2<<endl;
      }
      //getno();
      //displayno();
};
class sports{
    protected:
      int score;
    public:
      void getscore(int a){
        score=a; 
      }
      void displayscore(){
        cout<<"Marks of sports : "<<score<<endl;
      }
};
class result: public test,public sports{
    /*protected: rollno;sub1;sub2;score;
    public: getno();displayno();
           getmarks();displaymarks();
           getscore();displayscore();*/
    int total;
    public:
       void gettotal(){
           total=sub1+sub2+score;
       }
       void displaytotal(){
           cout<<"Roll no "<<rollno<<" student total marks : "<<total<<endl;
       }
};
int main(){
    result A;
    A.getno(15);
    A.getmarks(16,15);
    A.getscore(16);
    A.gettotal();
    A.displaytotal();
    return 0;
}


