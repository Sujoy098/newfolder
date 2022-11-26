#include<iostream>
using namespace std;
int count=0;
class sujoy
{
    private:
    	string tv;
    public:
    	void show()
    	{
    		tv=" Ipl final 2022";
    		
		}
		friend void suman(sujoy r);
};
void suman(sujoy r)
{
	cout<<"I'm suman now i,'watching"<<r.tv;
}
int main()
{
  	sujoy a;
  	a.show ();
  	suman(a);
  	
  	return 0;
}
