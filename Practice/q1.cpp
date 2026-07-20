#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length;
		int width;
	public:
		void dimesion(int l, int w){
			length=l;
			width=w;
		}
		
		void area()
		{
			cout<<"area is"<<length*width<<endl;
		}
		void perimeter()
		{
			cout<<"perimeter is "<<2*(
			length+width)<<endl;
		}
		
};
int main()
{
	Rectangle r1,r2;
	r1.dimesion(2,4);
	r2.dimesion(3,5);
	cout<<"first"<<endl;
	r1.area();
	r1.perimeter();
	cout<<"second"<<endl;
	r2.area();
	r2.perimeter();
	return 0;
	
}