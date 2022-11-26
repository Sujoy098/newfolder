#include<stdio.h>
void insertion_sort(int n,int arr[])
{
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		
		while(j>=0 && key<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}

		arr[j+1]=key;
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
		
	//printf(" ");
	}
	
}
int main()
{
	int n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    insertion_sort(n,arr);
    
    return 0;
}
