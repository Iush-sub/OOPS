#include<iostream>
using namespace std;
class Box{
	private:
		int l,b,h;

	public:	
		Box()
		{
			l=20;
			b=30;
			h=50;
		}
		int volume()
		{
			return l*b*h;
		}
};
int main()
{
	Box b;
	cout<<b.volume(); //hmm so we need to use cout cause it wont retrun value that easily.
	return 0;
}