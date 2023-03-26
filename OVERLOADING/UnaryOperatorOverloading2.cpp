// overloading of --(decrement) operator
#include<iostream>
using namespace std;
class space
{
   int x,y;
   public:
      space(){
        x=5;y=10;
      }
      void show(){
        cout<<x<<" "<<y<<endl;
      }
      friend void operator -- (space &S){
		(S.x)--;(S.y)--;
      }
};
int main(){
  space A;
  A.show();
  --A;
  A.show();
  return 0;
}
