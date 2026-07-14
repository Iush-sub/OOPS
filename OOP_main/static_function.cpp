#include<iostream>
using namespace std;
class stdu{
	public:
		static int c;
		
		stdu()
		{
			c++;
		}
		static int total()
		{
			return c;
		}
	
};
int stdu::c=0;
// so we need to like define a value but outside as older C++ suports this.
int main()
{
	stdu a,b,c,d;
	
	cout<<"total student="<<stdu::total()<<endl;// callling the variable to show the value. must memorize the syntax.
	return 0;
}