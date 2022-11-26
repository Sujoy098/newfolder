#include<iostream>
using namespace std;
union stu
{
	int roll;
	char name[20];
	float marks;
};
int main()
{
	union stu s;
	cout<<"Enter the student roll: ";
	cin>>s.roll;        //what  is s.? = s is the throw out of the value union stu
	cout<<"roll number:"<<s.roll<<endl;
	cout<<"Enter the student name: ";
	cin>>s.name;
	cout<<"student name:"<<s.name<<endl;;
	cout<<"Enter the student marks: ";
	cin>>s.marks;
	cout<<"student marks:"<<s.marks;
	
	// cout<<s.roll<<endl<<s.name<<endl<<s.marks; //codition is falase beacuse union equal to its biggest member size
	 return 0;
	 
}
