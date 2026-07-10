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
						
	public:
		void green()
		{
			cout<<"hello the great"; //this green exist in the main chef class
									 // but since italian chef has also green function hence it over rides the function.
									 // this is overrding of function.
		}
};


int main()
{
	chef c;
	c.green();
	italianchef b;
	b.green();
	return 0;
	
	
}