#include<stdio.h>
void main()
{
	int arr[50],n,i,j,t;
	printf("Enter no of elements: ");
	scanf("%d",&n);	
	printf("Enter Array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
	printf("\nNew Array is: ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
