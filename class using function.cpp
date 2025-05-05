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
	
	void input()
	{
		student_profile a;
	for(int i=0;i<2;i++)
	{
	
	cout<<"enter your name="<<endl;
	cin>>name;
	
	cout<<"enter your roll_no="<<endl;
	cin>>roll_no;
	
	cout<<"enter your regestration_no"<<endl;
	cin>>regestration_no;
	
	cout<<"enter your email"<<endl;
	cin>>email;
	
	cout<<"fee"<<endl;
	cin>>fee;
	}}
	
	void output()
	{
		for(int i=0;i<2;i++)
	{
	
	cout<<"name="<<name<<endl;
	
	cout<<"roll_no="<<roll_no<<endl;
	
	cout<<"regestration number"<<regestration_no<<endl;
	
	cout<<"email="<<email<<endl;
	
	cout<<"fee"<<fee<<endl;
	}}
		};

int main()

{
	student_profile s1;
	s1.input();
	s1.output();
	
	return 0;
}


