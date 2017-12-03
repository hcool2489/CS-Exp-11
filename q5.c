#include<stdio.h>
void main()
{
	int i,n,a[50],j;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter Array: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
				goto last;
	last:	
	if(i!=n)
		printf("\nDuplicate no is %d\n",a[i]);
}
