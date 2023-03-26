// single inheritance using public derivation
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
};
class D:public B{
      int c;
      public:
           void multiply(){
               c=b*get_a();
           }
           void show (){
                 cout<<"a= "<<get_a()<<endl<<"b= "<<b<<endl<<"c= "<<c<<endl;
           }
};
int main(){
      D d;
      d.get_ab();
      d.multiply();
      d.show();
      return 0;
}
