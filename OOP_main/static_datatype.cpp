#include<iostream>
using namespace std;
class stdu{
	public:
		static int no;
		
		stdu(){
			no++;
		}
	
};

int stdu::no=9; // so we need to like define a value but outside as older C++ suports this.
int main()
{
	stdu a,b,c,d;
	cout<<"total student="<<stdu::no<<endl;// callling the variable to show the value. must memorize the syntax.
	return 0;
}