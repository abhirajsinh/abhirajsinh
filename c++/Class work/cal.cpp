#include<iostream>
using namespace std;

int main()
{
	int a,b,choice;
	cout<<"\nEnter A: ";
	cin>>a;
	cout<<"\nEnter B: ";
	cin>>b;
	cout<<"\nA = "<<a<<",B= "<<b;
	
	cout<<"\nAddition: "<<(a+b);
	cout<<"\nSubtaction: "<<(a-b);
	cout<<"\nMultplication: "<<(a*b);
	cout<<"\nDivision: "<<((float)a/b)<<endl;
	
	cout<<"\n\nEnter your choice"<<choice;
	cin>>choice;
	
		if(choice==1)
	{
		cout<<"\n\tAddition : "<<(a+b);
	}
	else if(choice==2)
	{
		cout<<"\n\tSubtraction : "<<(a-b);
	}
	else if(choice==3)
	{
		cout<<"\n\tMultiplication : "<<(a*b);
	}
	else if(choice==4)
	{
		cout<<"\n\tDivision : "<<((float)a/b);
	}
	else
	{
		cout<<"\n\tInvalid choice";
	}
	return 0;
	
}