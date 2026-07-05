// constructor function.
#include<iostream>
using namespace std;
class book{
	public:
		int page;
		string author;
		book(string name, int pages){ 
			cout<<"type name"<<endl;
			cin>>name;
			cout<<"type pages"<<endl;
			cin>>pages;
			
		}
};
int main()
{
	book b1(); 
	
	return 0;
}