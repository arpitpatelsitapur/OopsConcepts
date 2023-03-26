// perform an operation with subscripting operator overloading
#include<iostream>
using namespace std;
const int size=10;
class safeArray{
      int arr[size];
      public:
          safeArray (){
                for(int i=0;i<size;i++){
                    arr[i]=i;
                }
          }
          int  operator [](int i){
                if(i>=size || i<0){
                    cout<<"Index value is out of range!!!";
                    return arr[0];
                }
                else{
                    cout<<"Element is available. ";
                    return arr[i];
                }
          }
};
int main (){
       safeArray A;
       cout<<"Element A[2] is "<<A[2]<<endl;
       cout<<"Element A[6] is "<<A[6]<<endl;
       cout<<"Element A[16] is "<<A[16]<<endl;
       return 0;
}
