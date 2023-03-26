//*extraction and insertion operator overloading(with cascading concept)*
#include<iostream>
using namespace std;
class date{
    int dd,mm,yyyy;
    public:
		friend ostream operator <<(ostream &op,date &D){
			op<<"Date is : ";
            op<<D.dd<<"-"<<D.mm<<"-"<<D.yyyy<<endl;
            return op;                                        // needed for cascading
        }
        friend istream  operator >>(istream &ip,date &D){
        	cout<<"Enter date-month-year : ";
            ip>>D.dd>>D.mm>>D.yyyy;
            return ip;                                        // needed for cascading 
        }
};
int main (){
    date D,E;
    cin>>D>>E;
    cout<<D<<E;
    return 0;
}
/*// extraction and insertion operator overloading(without cascading concept)
#include<iostream>
using namespace std;
class date{
    int dd,mm,yyyy;
    public:
		friend void operator <<(ostream &op,date &D){
			op<<"Date is : ";
            op<<D.dd<<"-"<<D.mm<<"-"<<D.yyyy<<endl;
        }
        friend void operator >>(istream &ip,date &D){
        	cout<<"Enter date-month-year : ";
            ip>>D.dd>>D.mm>>D.yyyy;
        }
};
int main (){
    date D;
    cin>>D;
    cout<<D;
}*/
