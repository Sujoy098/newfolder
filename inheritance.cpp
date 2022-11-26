#include<iostream>
using namespace std;
class dad
{
	protected:
		int amount;
		public:
			void input()
			{
				amount=10000;
			}
};
class son :public dad
{
	int money;
	public:
		void show()
		{
			money=5621;
			cout<<"son money "<<money<<endl;
			cout<<"dad amonut "<<amount;
	
	
		}
};
int main()
{
     son obj;
     obj.input();
     obj.show();
     
		
	return 0;
}
