#include<stdio.h>
void main()
{
	int class[50],n,i,rno;
	printf("Enter no of students present: ");
	scanf("%d",&n);	
	printf("Enter Roll no of students present: ");
	for(i=0;i<n;i++)
		scanf("%d",&class[i]);
	printf("\nEnter a rno to search: ");
	scanf("%d",&rno);
	for(i=0;i<n;i++)
	{
		if(class[i]==rno)
		{
			printf("\nStudent with Roll no %d is Present at position %d\n",rno,i+1);
			break;
		}
	}
	if(i==n)
	{
		printf("\nStudent is Absent !!\n");
	}
}
