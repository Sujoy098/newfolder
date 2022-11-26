#include<iostream>
using namespace std;
class thief
{
	private:
		string name,address;
		int mobile;
    public:
	void input()
	{
		name="raj";
		address="chowkhali";
		mobile=7679106401;
		
	}
	void output()
	{
		cout<<name<<endl;
		cout<<address<<endl;
		cout<<mobile<<endl;
	}
};
class police:public thife
{
	
}
int main()
{
//    thief obj;
//    obj.input();
//    obj.output();
     police p;
     p.input();
     p.output();
     
		
	return 0;
}