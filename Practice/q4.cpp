//inline function is likely the optimization technique.
// used to speed up program execution 

#include<iostream>
using namespace std;
class Circle{
	private:
		int r=5;
	public:
		inline int getarea(){
			return r*r;
		}
		inline float getcircim(){
			return 2*r*3.14;
		}
		int getradius(){
			return r;
		}
};
inline int getdiameter(Circle r)
{
	return r.getradius()*2;
}

int main(){
	Circle a;
	cout<<a.getarea()<<endl;
	cout<<a.getcircim()<<endl;
	cout<<a.getradius()<<endl;
	return 0;
}