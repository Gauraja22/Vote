#include<iostream>
using namespace std;
main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"\nYou are eligible for voting";
	}
	else
	{
		cout<<"\nYou are not eligible for voting";
		cout<<"\nWait for "<<18-age<<" years";
	}
}
