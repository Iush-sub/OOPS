#include<iostream>
using namespace std;
class chef {
	public:
		void red()
		{
			cout<<"hello";
		}
		void blue()
		{
			cout<<"hello world";
		}
		void green()
		{
			cout<<"hello the world";
		}
};

class italianchef: public chef{
						// so this class has basically everything inherited from the chef class.
	
};


int main()
{
	chef c;// this is a variable with a chef class aka we can alos call it as user-defined datatype
	c.blue();
	italianchef b;
	b.blue();
	return 0;
	
	
}