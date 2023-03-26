#include<iostream>
using namespace std;
class item
{
static int count; //count is static
int number;
public:
void getdata(int a)
{
number=a;
count++;
}
void get_count(void)
{
cout<<"count:"<<count<<endl;
}
};
int item :: count ; //count defined
int main( )
{
item a,b,c,d;
a.get_count( );
b.get_count( );
c.get_count( );
d.get_count( );
a.getdata(10);
b.getdata(20);
c.getdata(30);
d.getdata(40);
cout<<"after reading data : "<<endl;
a.get_count( );
b.get_count( );
c.get_count( );
d.get_count( );
return(0);
}
