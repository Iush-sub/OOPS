#include<iostream> //fun prj ngl but wont come in assesment
using namespace std;
int main()
{
	string name,place,animal,food,verb,adjective;
	
	cout<<"Enter Name: ";
	getline(cin,name);
	cout<<"Enter Place: ";
	getline(cin,place);
	cout<<"Enter Animal: ";
	getline(cin,animal);
	cout<<"Enter Food: ";
	getline(cin,food);
	cout<<"Enter Verb: ";
	getline(cin,verb);	
	cout<<"Enter Adjective: ";
	getline(cin,adjective);
	
	cout<<"YOur story"<<endl;
	
	cout<<"One day, "<<name<<" went to "<<place<<" with a "<<animal<<"."<<endl;
	cout<<"They ate "<<food<<" and "<<verb<<" all day."<<endl;
	cout<<"It was the most "<<adjective<<" vacation ever!";
	
	
	return 0;	
}
//One day, {Aayush} went to {Japan} with a {penguin}.
//They ate {pizza} and {danced} all day.
//It was the most {amazing} vacation ever!