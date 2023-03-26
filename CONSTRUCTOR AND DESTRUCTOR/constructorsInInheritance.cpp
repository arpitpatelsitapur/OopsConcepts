// constructors in inheritance 
#include<iostream>
using namespace std;
class alpha{
    int x;
    public:
       alpha(int a){
           x=a;
       }
       void display_x(){
         cout<<"x = "<<x<<endl;  
    }
};
class beta{
    float y;
    public:
      beta(float b){
        y=b;
      }
      void display_y(){
        cout<<"y = "<<y<<endl;  
      }
};
class gamma: public alpha, public beta{
    int m,n;
    public:
     gamma(int a, float b, int c, int d):
     alpha(a),
     beta(b)
     {
        m=c;n=d;
     }
     void display(){
        cout<<"The Assigned values are :\n";
        alpha::display_x();
        beta::display_y();
        cout<<"m = "<<m<<endl<<"n = "<<n<<endl;
     }
};
int main(){
    gamma D(5,10.5,3,4);
    D.display();
    return 0;
}
