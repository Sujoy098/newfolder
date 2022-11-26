#include<stdio.h>
void maxmum_number_find(int n,int arr[])
{
	int i, max=-9999, smax=-9999;
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	printf("maximum number is : %d\n",max);
	for( i=0;i<n;i++)
	{
		if(smax<arr[i] && arr[i]<max)
		smax=arr[i];
	}
	printf("second maximum number is : %d",smax);
}
int main ()
{
	int n,max,i;
	printf("Enter the number of array elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	maxmum_number_find(n,arr);
	return 0;
}
