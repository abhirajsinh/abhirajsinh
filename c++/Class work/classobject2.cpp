#include<iostream>
using namespace std;

class Student
{
	public:
		int eid;
		string name;
		long long mobile;
		void  getDetails()
		{
			cout<<"\nEnter Id : ";
			cin>>eid;
			cout<<"\nEnter Name : ";
			cin>>name;
			cout<<"\n Enter Mobile number : ";
			cin>>mobile;
			
		}
		
		void showDetails()
		{
			cout<<"\nId : "<<eid;
			cout<<"\nName : "<<name;
			cout<<"\nMobile Number : "<<mobile;
			
		}
};
 
int main()
{
	Student details;
	details.getDetails();
	details.showDetails()	;
	
	return 0;
}