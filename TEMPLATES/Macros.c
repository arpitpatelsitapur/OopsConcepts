// macros in c languaage 
#include<stdio.h>
#include<string.h>
#define pi 3.14             // object like macro
#define sum(a,b) a+b        // function like macro
/*#define HELLO for(int i=0;i<10;i++)\
                 printf("Hello %d\n",i+1);*/
int main(){
	int r = 10;
	float area= pi*r*r;
	printf("Area = %f\n",area);
	int s=sum(r,r);
	printf("Sum = %d\n",s);
	printf("Time = %s\n",__TIME__);
	printf("Date = %s\n",__DATE__);
	printf("Line = %d\n",__LINE__);
	printf("File = %s\n",__FILE__);
	//HELLO;
	return 0;
}
