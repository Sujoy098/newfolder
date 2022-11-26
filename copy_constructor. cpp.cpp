#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    	A(int a, int b )  //parameterized
    	{
    	   x=a;y=b;
    		cout<<a<<ends<<b<<endl;
		}
		A(A &ref)
		{
		   x=ref.x;
		   y=ref.y;
		   cout<<x<<ends<<y;	
		}
};
int main()
{
   A obj(10,20); //A obj=A(10,20)
   A obj2=obj;
	
	return 0;	
}
