#include<iostream>
using namespace std;
int main()
{
	int *p;
	int a=10;
	
	p=&a; //a adress ke p hold corche
	
	cout<<&a<<endl;   //address of a
	cout<<p<<endl;  //address of p(jehetu p=&a address ke hold coreche tai,p kache o same address ache)
	
	cout<<"a="<<a<<endl; // value of a
	cout<<"p="<<*p;   //value of p (*p mane pointer je adress ke hold coreche tate je value ache take ptint corbe)
	
	return 0;
}
