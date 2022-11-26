#include<iostream>
using namespace std;
struct stu
{
	int marks; // int 4 bytes
	float avg; //float 4bytes
	double salary; //double8 bytes (4+4+8=16)
};
union stu2
{
	int marks; 
	float avg;
	double salary; //totally(8)bytes
};
int main()
{
	struct stu s;
	union stu2 s2;
	cout<<"structure size="<<sizeof(s)<<endl;
	cout<<"union size="<<sizeof(s2);
	return 0;
}
