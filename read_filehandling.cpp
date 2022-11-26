#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string str;
	ifstream newfile("C:\\Users\\sujoy\\OneDrive\\Desktop\\cpp.text");
	cout<<"file created..."; //file created hoye che kina check corar jono
	
   while(getline(newfile,str ) )
   {
	 cout<<str<<endl;
   }
   newfile.close();
	return 0;
}
