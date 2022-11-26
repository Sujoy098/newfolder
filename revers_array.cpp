#include<stdio.h>
int main()
{
	int n,i,arr[50],k=0,rev[50];
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	printf("Enter the array of element: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}	
	for(i=n-1;i>=0;i--)
	{
		rev[k++]=arr[i];
	}
	printf("Revers array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",rev[i]);	
    }
    return 0;
}
