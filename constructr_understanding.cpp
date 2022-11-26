#include<bits/stdc++.h>
using namespace std;
class sujoy
{
	int a;
	float b;
	string gfname;
	
	public:
		sujoy()
		{
			a=10;
			b=10.3;
			gfname="riya";
			cout<<" constructor is called\n";
		}
		sujoy(int a,int b,string gfname)
		{
			this->a=a;
			this->b=b;
			this->gfname=gfname;
			cout<<"parameterized constructor is called\n";
		}
		~sujoy()
		{
			cout<<"destructor is called\n";
		}
		void display()
		{
			cout<<" "<<a<<" "<<b<<" "<<gfname<<"\n";
			
		}
		
};
int main()
{
	sujoy nikhil;
	nikhil.display();
	sujoy prajjal = new sujoy(100,10,"prokriti");
	prajjal.display();
	sujoy obj3;
	//obj3.display();
	sujoy obj4;
	//obj4.display();
	
	
	
}
