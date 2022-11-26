#include<iostream>
using namespace std;
int a,b,c;
class A
{
   protected:
   	      int a,b;
	public:
	
		void input()
		{
			cout<<"Enter the two number: "<<endl;
			cin>>a>>b;
			
		}
		
};
class B : public A
{
	int c;
	public:
		void add()
		{
			c=a+b;
			cout<<"addition "<<c<<endl;
		}
		void sub()
		{
			c=a-b;
			cout<<"substraction "<<c<<endl;
		}
};
class C :public B
{
	int c;
	public:
		void multi()
		{
			c=a*b;
			cout<<"multiplication "<<c<<endl;
			
		}
		void div()
		{
			c=a/b;
			cout<<"division "<<c<<endl;
		}
};
int main()
{
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.multi();
    obj.div();
    
		
	return 0;
}
