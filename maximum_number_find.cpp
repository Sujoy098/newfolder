#include<stdio.h>
void maximum_number_find(int n,int arr[])
{
	int i,max=0,smax=0;
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	printf("maximum number is :%d\n",max);
	for(i=0;i<n;i++)
	{
		if(smax<arr[i] && arr[i]<max)
		{
			smax=arr[i];
		}
	}
	printf("second maximum number is :%d\n",smax);
}
int main()
{
	int n,i ,max,smax;
	printf("Enter the number of size: ");
	scanf("%d",&n);
	int arr[i];
    printf("Enter the array element");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	maximum_number_find(n,arr);
	return 0;
	
}
