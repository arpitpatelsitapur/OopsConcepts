//  template class  
#include<iostream>
using namespace std;
const int size=3;
template<class T>
class vector{
	T* v;
	public:
		vector(){
			v=new T[size];
			for(int i=0;i<size;i++){
				v[i]=i;
			}
		}
		vector(T* a){
			for(int i=0;i<size;i++){
				v[i]=a[i];
			}
		}
		T operator*(vector &y){
			T sum=0;
			for(int i=0;i<size;i++){
				sum+=this->v[i]*y.v[i];
			}
			return sum;
		}
		void display(){
			for(int i=0;i<size;i++){
				cout<<v[i]<<endl;
			}
			cout<<endl;
		}
};
int main(){
	int x[3]={1,2,3};
	int y[3]={4,5,6};
	vector<int>v1(x);
	vector<int>v2(y);
	//v1=x;
	//v2=y;
	cout<<"v1 = ";
	v1.display();
	cout<<"V2 = ";
	v2.display();
	cout<<"v1*v2 = "<<v1*v2<<endl;
	return 0;
}
