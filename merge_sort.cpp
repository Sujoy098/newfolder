#include<stdio.h>
int main()
{
	int i,j,m,n,k,temp,a[50],b[50],c[100];
	printf("Enter the size of first: ");
	scanf("%d",&m);
	printf("Enter the first array elements: \n");
	for(i=0; i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the size of second: ");
	scanf("%d",&n);
	printf("Enter the second array elements: \n");
	for(i=0; i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0; i<m;i++)
	{
		c[i]=a[i];
	}
	k=m;
	for(i=0; i<n;i++)
	{
		c[k++]=b[i];
	}
	for(i=0;i<k-1;i++)
	{
		for(j=0 ; j<k-i-1 ;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=c[j+1];
				c[j+1]=c[j];
				c[j]=temp;
			}
		}
	}
	printf("Resultent array :\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",c[i]);
	}
	return 0;
}
