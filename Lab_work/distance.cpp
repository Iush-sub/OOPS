#include<iostream>
using namespace std;
class dist{
	public:
		int m,c;
		int s;
	void meter(){
		cout<<"type meter"<<endl;
		cin>>m;
	}
	void centimeter()
	{
		cout<<"type centimeter"<<endl;
		cin>>c;
	}
	void add()
	{
		s=c+m*100;
	}
	void display(dist a,dist b)
	{
		cout<< a.s+b.s <<endl;;
	}
};
int main()
{
	dist a,b,c;
	cout<<"first dist"<<endl;
	a.meter();
	a.centimeter();
	a.add();
	cout<<"second dist"<<endl;
	b.meter();
	b.centimeter();
	b.add();
	
	c.display(a,b); // a dummy object is created so that a we can print the output.
}
