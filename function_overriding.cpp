#include<iostream>
using namespace std;              //run time polymorphism
class A
{
     public:
     	void person()
     	{
     	   cout<<"good morning"<<endl;
	    }
		
};
class B:public A
{
	public:
     	void person()
     	{
     	   cout<<" good night"<<endl;
	    }
};

int main()
{
//	B obj;
//	obj.person();
//	obj.A::person();	
   A *p;
   B obj;
   p=&obj;
   p->person();
	return 0;
}
