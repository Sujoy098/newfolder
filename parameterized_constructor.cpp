#include<iostream>
using namespace std;
class A
{
    
    public:
    	A(int a, int b )  //parameterized
    	{
    	
    		cout<<a<<ends<<b;
		}
};
int main()
{
   A obj(10,20); //A obj=A(10,20)
	
	return 0;	
}
