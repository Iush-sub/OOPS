#include<iostream>
using namespace std;
class book{ // blue print of book
	public:
		string title;
		string author;
		int pages;
};

int main()
{
	// classes and objects 
	// real world entities cant be represneted.
	// class is a new data type. but unlike a userdefined data type a class can store funtion as well.
	// imagine a car which has speed and brand_name which stores speed in integer/float variable
	// while brand is a sting variable along with these variables there exist a function of car.
	// in real life world we call this a purpose or attribute.
	// so using datatypes and function we create a class and hence a blue print of a car is made to represent an object.
	// now think of integer 'int a' int is a datatype while a is a variable.
	//  now like above we have car as a data type(unique one) and we sat 'car a' so car is class while a is an object.
	book book1,book2; // actual book in our main program
	book1.title = "green tea";
	book1.author = "Iush";
	book1.pages = 90;
	cout<<book1.pages<<endl;
	book2.title = "tea";
	book2.author = "us";
	book2.pages = 60;
	cout<<book2.author;
	
	// concept of object and class all clear...
	
	return 0;
}