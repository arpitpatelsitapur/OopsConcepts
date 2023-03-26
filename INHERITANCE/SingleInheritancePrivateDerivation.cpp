// single inheritance using private derivation 
#include<iostream>
using namespace std;
class B{
      private:
          int a;
      public:
          int b;
          void get_ab(){
              a=5;b=10;
          }
          int get_a(){return a;}
          void display_a(){
              cout<<"a = "<<a<<endl;
          }
};
class D: private B{
      int c;
      public:
           void multiply(){
               get_ab();       // accessible in class D
               c=b*get_a();
           }
           void display (){
               display_a();    // accessible in class D
                 cout<<"b= "<<b<<endl<<"c= "<<c<<endl;
           }
};
int main(){
      D d;
      //d.get_ab();   // not accesible outside class D
      d.multiply();
      //d.display();  // not accessible outside class D
      d.display();
      return 0;
}
