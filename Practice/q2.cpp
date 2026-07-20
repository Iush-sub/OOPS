#include<iostream>
using namespace std;
class Sample{
	public:
		int int_type;
		float float_type;
		double double_type;
		
		void hello(){
			cout<<"test member function"<<endl;
		}



// main objective of this program is to give us understanding that datatype affects the memory of the object but not the member function.



		
};
int main()
{
	Sample a,b,c;
	cout<<sizeof(a.float_type)<<endl;
	cout<<sizeof(a.double_type)<<endl;
	
	cout<<sizeof(a.int_type)<<endl;
	cout<<sizeof(a.hello())<<endl;

	cout<<sizeof(a)<<endl;
	
	cout<< &a<<endl;
	cout<< &b<<endl;
	return 0;
}