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
	printf("Enter the array element to be added:\n");
	scanf("%d",&num);
	printf("1 to add at beginning\n 2 to at the end\n 3 to add in between the array\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			for(i=n;i>=0;i--)
			{
				arr[i]=arr[i-1];
				
				
			}
			arr[0]=num;
			n++;
			break;
		case 2:
			arr[n]=num;
			n++;
			break;
		case 3:
			printf("Enter the position: ");
			scanf("%d",&pos);
			for(i=n;i>=pos ;i--)
			{
				arr[i]=arr[i-1];
				
				
			}
			arr[pos-1]=num;
			n++;
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
