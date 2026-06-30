#include<iostream>
using namespace std;

int main()
{
	float radius;
	const float PI=3.14;
	cout<<"type radius"<<endl;
	cin>>radius;
	cout<<"the area of the circle is "<<radius*PI*radius<<endl;
	return 0; //madatory in exams
	
}

// the const qualifier works as asigining any numeric value to any data type variable and in this context we.. 
// ..haveuse value of pi. works like the define header file which we was used ages ago.
// error program worked whith no int return type and its definitly the float we are returning
 
	