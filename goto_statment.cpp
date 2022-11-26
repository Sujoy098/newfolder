#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Emter the age: ";
	cin>>age;
	if(age>=18)
	goto vote;
	else
	goto notvote;
	vote:
		cout<<"Eligible for vote...!";
		return 0;
	notvote:
		cout<<"Not Eligible for vote..!";
	return 0;
}
