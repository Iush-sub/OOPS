#include<iostream>
using namespace std;
class Account{
	private:
		int accountnumber;
		double balance;
	public:
		void withdraw();
		void deposite();
		void showbalance();
		
};
// main prg was about the declaration of function outside the class using scope resulation operator.
void Account::withdraw(){
	cout<<"hello"<<endl;
};
 int main()
{
	Account a;
	a.withdraw();
	
	return 0;
}