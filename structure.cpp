#include<iostream>
using namespace std;
struct stu
{
	int roll;
	char name[20];
	float marks;
};
int main()
{
	struct stu s;
	cout<<"Enter the student roll: ";
	cin>>s.roll;        //what  is s.? = s is the throw out of the value struct stu
	cout<<"Enter the student name: ";
	cin>>s.name;
	cout<<"Enter the student marks: ";
	cin>>s.marks;
	
	 cout<<s.roll<<endl<<s.name<<endl<<s.marks;
	 return 0;
	 
}
