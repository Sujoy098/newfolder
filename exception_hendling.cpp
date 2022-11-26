#include<iostream>
using namespace std;
int main()
{
	cout<<"Execution starting..."<<endl;
	int a,b,c;
	cout<<"Enter two number: ";
	cin>>a>>b;
	try
	{
		if(b==0)
		throw b;
		c=a/b;
		cout<<"result: "<<endl;
	}
	catch(int x)
	{
		cout<<"can't devide by "<<x<<endl;
	}
	cout<<"Execution ended...";
	return 0;
}
