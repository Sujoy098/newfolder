#include<iostream>
#inlude<fstream>
using namespace std;
int main()
{
	ofstream newfile("C:\\Users\\sujoy\\OneDrive\\Desktop\\cpp.text");
	cout<<"file created..."; //file created hoye che kina check corar jono
	
	newfile.close();// .close used cora hoy karon file created hoyer por unneserry vabe space nite thakbe ar .close holo akta function
	
	return 0;
}