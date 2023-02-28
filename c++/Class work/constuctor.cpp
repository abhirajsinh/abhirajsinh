#include<iostream>
using namespace std;

class sample
{
     public:
     	
     	int age;
     	string fname,lname;
     	
     	sample()
     	 {
     		cout<<"\n\nDefault Constuctor";
     		
		 }
		 sample(string f,string l,int a)
		 {
		 	cout<<"\nParameter Constuctor called";
		 	fname = f;
		 	lname = l;
		 	age = a;
		 }
		 sample(const sample &obj)
		 {
		 	cout<<"\n\nCopy Constructor Called.";
		 	fname = obj.fname;
		 	lname = obj.lname;
		 	age = obj.age;
		 	
		 }
		
		 void showdetails()
		 {
		 	cout<<"\n\nFirst name : "<<fname<<"\nLast Name : "<<lname<<"\nAge : "<<age;
		 }
};

int main()
{
	sample abhiraj,obj1("Abhiraj","Raol",22),obj2("Neel","Deda",25);
	obj1.showdetails();
    obj2.showdetails();
    
	
	return 0;
}