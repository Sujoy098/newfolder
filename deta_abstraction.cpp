#include<iostream>
using namespace std;
class mybank
{
	private:
		int atmpin,balance;
	public:
		int accountnumber;
		string bankname;
		int IFSC;
	void input()
	{
		bankname="indian bank";
		IFSC=7216;
		accountnumber=46125385;
		atmpin=721633;
		balance=4005;
		
	}
	void output()
	{
		cout<<"My bank details...!"<<endl;
		cout<<bankname<<endl;
		cout<<IFSC<<endl;
		cout<<accountnumber<<endl;
		cout<<atmpin<<endl;
		cout<<balance<<endl;
	}
};
int main()
{
	mybank obj;
	obj.input();
	obj.output();
	cout<<"raj tring to access my account number...!"<<endl;
	cout<<"My bank details...!"<<endl;
		cout<<obj.bankname<<endl;
		cout<<obj.IFSC<<endl;
		cout<<obj.accountnumber<<endl;
	//	cout<<obj.atmpin<<endl;   //can not allowe access in atmpin
	//	cout<<obl.balance<<endl;//can not allowe access in balance
		
		return 0;
}
