#include<iostream>
using namespace std;

class student_profile{
	public:
		string regestration_no;
		string name;
		int roll_no;
		string email;
		int fee;
		int security_charge;
		int subject_no;
		string degree_name;
		char section;
		};

int main()
{
     student_profile a;
	for(int i=0;i<2;i++)
	{
	
	cout<<"enter your name="<<endl;
	cin>>a.name;
	
	cout<<"enter your roll_no="<<endl;
	cin>>a.roll_no;
	
	cout<<"enter your regestration_no"<<endl;
	cin>>a.regestration_no;
	
	cout<<"enter your email"<<endl;
	cin>>a.email;
	
	cout<<"fee"<<endl;
	cin>>a.fee;
}

for(int i=0;i<2;i++)
	{
	
	cout<<"name="<<a.name<<endl;
	
	cout<<"roll_no="<<a.roll_no<<endl;
	
	cout<<"regestration number"<<a.regestration_no<<endl;
	
	cout<<"email="<<a.email<<endl;
	
	cout<<"fee"<<a.fee<<endl;
}

}
