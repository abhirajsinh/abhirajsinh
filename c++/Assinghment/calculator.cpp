#include<iostream>
using namespace std;

class Calculator
{
	public:
		int a,b;
	void getDetails()
	{
		
	cout<<"\nEnter A: ";
	cin>>a;
	cout<<"\nEnter B: ";
	cin>>b;
	cout<<"\nA = "<<a<<",B= "<<b;
	
	cout<<"\nAddition: "<<(a+b);
	cout<<"\nSubtaction: "<<(a-b);
	cout<<"\nMultplication: "<<(a*b);
	cout<<"\nDivision: "<<((float)a/b);
    }
   
};

int main()
{
    Calculator details;
    details.getDetails();
	return 0;
}