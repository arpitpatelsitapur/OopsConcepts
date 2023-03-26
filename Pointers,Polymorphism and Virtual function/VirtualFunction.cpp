// pointers to derived classes
#include<iostream>
using namespace std;
class BC{
      public:
          int b;
          void virtual show (){
              cout<<"b = "<<b<<endl;
         }
};
class DC:public BC{
      public:
          int d;
          void show (){
               cout<<"b = "<<b<<"\nd = "<<d<<endl;
          }
};
int main (){
      BC* bptr;
      BC base;
      bptr=&base;
      bptr->b=100;
      cout<<"bptr points to base object.\n";
      bptr->show();
      DC derived;
      bptr = & derived;
      bptr->b= 200;
      /*bptr->d = 200; //won't work*/
      cout<<"bptr now points to derived object.\n";
      bptr->show();
      DC *dptr;
      dptr=& derived;
      dptr ->d = 300;
      cout<<"dptr is derived type pointer.\n";
      dptr->show();
      cout<<"using ((DC*)bptr)\n";
      ((DC*)bptr)->d=400;
      ((DC*)bptr)->show();
      return 0;
}
