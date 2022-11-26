#include<iostream>
using namespace std;              //compile time polymorphism
class A
{
     int num1,num2,s,m;
     public:
     	void person()
     	{
     		cout<<"Enter the two number: ";
     		cin>>num1>>num2;
     		s=num1+num2;
     		cout<<"addition"<<s<<endl;
		 }
		 void person(int a,int b)
		 {
		 	m=a*b;
		 	cout<<"multiplication"<<m<<endl;
		 }
		
};

int main()
{
	A obj;
	obj.person(10,20);
	obj.person();	
	return 0;
}
