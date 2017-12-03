#include<stdio.h>
void main()
{
	int arr[50],n,i,el,pos;
	printf("Enter no of elements: ");
	scanf("%d",&n);	
	printf("Enter Array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\nEnter element to insert: ");
	scanf("%d",&el);
	printf("Enter position: ");
	scanf("%d",&pos);
	for(i=n;i>pos-1;i--)
		arr[i]=arr[i-1];
	n++;
	arr[pos-1]=el;
	printf("\nNew Array is: ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
