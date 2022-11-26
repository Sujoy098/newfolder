#include<iostream>
using namespace std;
class sanjib;
class sujoy
{
    private:
    	int a;
    public:
    	void show()
    	{
    		a=10;
    		
		}
		friend void suman(sujoy p,sanjib p2);
};
class sanjib
{
	private :
		int b;
		public:
		void show()
		{
			b=10;
		}
		friend void suman(sujoy p,sanjib p2);
};
void suman(sujoy p,sanjib p2)
{
	int c;
	c=p.a+p2.b;
	cout<<c;
}
int main()
{
  	sujoy a;
  	a.show ();
  	sanjib a2;
  	a2.show();
  	suman(a,a2);
  	
  	return 0;
}
