#include <iostream>
#include <fstream>
#include <assert.h>
using namespace std;
int main(void)
{
     int data;           // file contains an undermined number of integer values
     ifstream fin;     // declare stream variable name

     fin.open("myfile",ios::in);    // open file
     assert (!fin.fail());     
     fin >> data;        // get first number from the file (priming the input statement)
                              // You must attempt to read info prior to an eof( ) test.
     while (!fin.eof( ))      //if not at end of file, continue reading numbers
     {
          cout<<data<<endl;    //print numbers to screen
          fin >> data;               //get next number from file
     }
     fin.close( );       //close file
     assert(!fin.fail( ));
     return 0;
}
