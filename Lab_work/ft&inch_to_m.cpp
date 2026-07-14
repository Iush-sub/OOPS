// wap to convert object of class with data members feet and inch to meter.
#include<iostream>
using namespace std;
class dist{
	public:
		double ft,in;
	void input()
	{
		cout<<"type feet"<<endl;
		cin>>ft;
		cout<<"type inch"<<endl;
		cin>>in;
	}
	void conversion()
	{
		float meter;
		meter=(ft*12+in)/39.37;
		cout<<"In meter = "<<meter<<endl;
		
	}
};
int main()
{
	dist a;
	a.input();
	a.conversion();
	return 0;
}