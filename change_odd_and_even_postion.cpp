#include<stdio.h>
int main()
{
	int arr[50],n,i,temp;
	printf("Enter the size:\n");
	scanf("%d",&n);
	printf("Enter the array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Original array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2!=0){
			temp=arr[i-1];
			arr[i-1]=arr[i];
			arr[i]=temp;
		}
		
	}
	printf("\n Resultant array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

   return 0;
	
}
