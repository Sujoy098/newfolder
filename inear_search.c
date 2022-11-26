#include<stdio.h>
void linear_search(int n,int arr[],int element)
{
	int flag=0;
	int i;
	for(i=0 ; i<n; i++)
	{
		if(element==arr[i])
		{
			flag=1;
			printf("Element found at index = %d",i+1);
		    break;
		}
	}
	if(flag==0)
	{
		printf("element not found..");
		return;
	}
}
int main()
{
	int n,ans,element;
	printf("Enter number of array elements :\n");
	scanf("%d",&n);
	int arr[n], i;
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the array element you to search:\n");	
	scanf("%d",&element);
	linear_search(n,arr,element);
	return 0;
}
