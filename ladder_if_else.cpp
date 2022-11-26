#include<iostream>
using namespace std;
int main()
{
	int a,b,ch,add,sub,mult,div;
	cout<<"Enter The Two number: ";
	cin>>a>>b;
	cout<<"Enter the choice: ";
	cin>>ch;
	if(ch==1)
	{
		add=a+b;
		cout<<add;
	}
	else if(ch==2)
	{
		sub=a-b;
		cout<<sub;
	}
	else if(ch==3)
	{
		mult=a*b;
		cout<<mult;
	}
	else if(ch==4)
	{
		div=a/b;
		cout<<div;
	}
	else
	{
		cout<<"invalid choice";
	}
	return 0;
}
