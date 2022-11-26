#include<iostream>
using namespace std;
class Nikhil
{
	int a;
	int b;
	string name;
	public:
		
		void calc()
		{
			cin>>a>>b>>name;
		}
		void display()
		{
			cout<<a<<" "<<b<<" "<<name;
		}
};

int main()
{
	Nikhil obj;
//	obj.a=10;
//	obj.b=20;
//	obj.name="Prajjal";
	obj.display();
	obj.calc();
	obj.display();
}


