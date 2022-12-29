#include<iostream>
using namespace std;

class Student
{
	public:
		int eid;
		string name;
		long long mobile;
		
		
		void showDetails(int eid,string name,long long mobile)
		{
			cout<<"\nId : "<<eid;
			cout<<"\nName : "<<name;
			cout<<"\nMobile Number : "<<mobile;
			
		}
};
 
int main()
{
	Student details;
	int eid;
	string name;
	long long mobile;
		cout<<"\nEnter Id : ";
			cin>>eid;
			fflush(stdin);
			cout<<"\nEnter Name : ";
			//cin>>name;
			getline(cin,name);
			cout<<"\n Enter Mobile number : ";
			cin>>mobile;
	details.showDetails(eid,name,mobile);
	
	return 0;
}