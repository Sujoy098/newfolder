#include<iostream>
using namespace std;
template <class A>
void print(A x,A y)
{
	cout<<x<<ends<<y<<endl;
}
int main()
{
    print(10,20);
	print('a','b');
	print(41.12,45.32);
	print("sujoy","sanjib");
	
	return 0;	
}
