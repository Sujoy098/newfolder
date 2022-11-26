#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int i;
	for(i=0;i<5;i++)
	{
		printf("Memory location of %d = %d\n",arr[i],&arr[i]);

	}
	
	return 0;
}
