#include<stdio.h>
int main()
{
	int arr[50],n,i,ch,num,pos;
	printf("Enter the size of array element:\n");
	scanf("%d",&n);
	printf("Enter the array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("1 to delete at beginning\n 2 to delete at the end\n 3 to delete in between the array\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			for(i=0;i<n;i++)
			{
				arr[i]=arr[i+1];
			}
			n--;
			break;
		case 2:
			
			n--;
			break;
		case 3:
			printf("Enter the position: ");
			scanf("%d",&pos);
			if(pos <1 || pos>n)
			{
				printf("invalid postion!");
				break;
			}
			
			for(i=pos-1;i<n ;i++)
			{
				arr[i]=arr[i+1];
			}
			n--;
			break;
		default :
			printf("Wrong choice: \n");
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}		
			
			
	return 0;		
			
			
			
			
	
	 
}
