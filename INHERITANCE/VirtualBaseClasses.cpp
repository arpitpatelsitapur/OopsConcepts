// understanding concept of virtual Base classes
#include<iostream>
using namespace std;
class grandparent{
    protected:
      char name[20];
      char surname[20];
    public:
      void get_name(){
        cout<<"Enter the name : ";
        cin>>name;
      }
      void get_surname(){
        cout<<"Enter the surname : ";
        cin>>surname;
      }
};
class parent1 : virtual public grandparent{
    protected:
      int income1;
      //name[20];
      //surname[20];
    public:
      void get_income1(int x){
        income1=x;
      }
      //get_name();
      //get_surname();
};
class parent2 : virtual public grandparent{
    protected:
      int income2;
      //name[20];
      //surname[20];
    public:
      void get_income2(int x){
        income2=x;
      }
      //get_name();
      //get_surname();
};
class child : public parent1,public parent2{
    protected:
      int spendings,savings; 
      //name[20];
      //surname[20];
      //income1;
      //income2;
    public:
      void get_spendings(int x){
        spendings=x;
      }
      //get_name();
      //get_surname();
      //get_income1();
      //get_income2();
      void get_savings(){
        savings=income1+income2-spendings;
      }
      void display(){
        cout<<"Total income : "<<income1+income2<<endl;
        cout<<"Total spendings : "<<spendings<<endl;
        cout<<"Total savings : "<<savings<<endl;
      }
};
int main(){
    child A;
    A.get_name();
    A.get_surname();
    A.get_income1(55000);
    A.get_income2(58000);
    A.get_spendings(40000);
    A.get_savings();
    A.display();
    return 0;
}






