// constructor function.
#include<iostream>
using namespace std;
class book{
	public:
		int page;
		string author;
		book(string name){ // here we can see we can also give the function arguments to print as shown below.
			cout<<"creating objects"<<endl;
			cout<<name;
			
		}
};
int main()
{
	book b1("help"); // here we called the object hence a display message is seen.
	b1.author ="help";
	b1.page = 54;
	return 0;
}
// note: constructors are basically a funtion named after the class which is alwaysed called whenever a object is created.