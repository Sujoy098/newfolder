#include<iostream>
using namespace std;
int main()
{
	int arr[2][2],i,j;
	cout<<"Enter the array element: ";
	for(int i=0; i<=1; i++)
	{
		for(int j=0;j<=1;j++)
		{ 
             cin>>arr[i][j];		  
		}
	}
	cout<<"\nArray element:\n";
	for(int i=0; i<=1; i++)
	{
		for(int j=0;j<=1;j++)
		{ 
             cout<<arr[i][j]<<ends;		  
		}
			cout<<endl;
	}
   return 0;
}
