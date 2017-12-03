#include<stdio.h>
void main()
{
	int arr[50],n,i,ch,el;
	printf("Enter no of elements: ");
	scanf("%d",&n);	
	printf("Enter Array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	menu:
	printf("\nDelete element using\n\t1 - Index no\n\t2 - Element\n: ");
	scanf("%d",&ch);
	i=-1;
	switch(ch)
	{
		case 2:
			printf("\nEnter element to be deleted: ");
			scanf("%d",&el);
			for(i=0;i<n;i++)
			{
				if(arr[i]==el)
					break;
			}
			if(i==n)
			{
				printf("\nElement not found...");
				break;
			}

		case 1:
			if(i==-1)
			{
				printf("\nEnter index(position-1) of element to be deleted: ");
				scanf("%d",&i);
				if(i>n-1)
				{
					printf("\nNo Such Index found...");
					break;
				}
			}
			for(;i<n-1;i++)
				arr[i]=arr[i+1];
			n-=1;
			break;

		default:
			printf("\n !! Wrong choice entered... !!\n");
			goto menu;
	}
	printf("\nNew Array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
