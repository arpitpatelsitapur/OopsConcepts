#include<iostream>
using namespace std;
class space
{
  int x, y, z;
  public:
    void getdata (int a, int b, int c){
       x = a, y = b, z = c;
    }
    space (){
      x = 5, y = 10, z = 15;
    }
    space (int a, int b, int c){
      x = a, y = b, z = c;
    }
    void display (){
      cout << "x = " << x <<", y = " << y <<", z = " << z << endl;
    }
    friend void operator - (space &);
};
void operator- (space & a){
  a.x = -a.x;
  a.y = -a.y;
  a.z = -a.z;
}
int main (){
  space S1;
   //S1=S2;
  S1.display ();
  //operator - S1;
  operator - (S1);
  S1.display ();
  return 0;
}

