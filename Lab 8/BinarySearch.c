#include <stdio.h>
void main()
{
	int i,j,low,high,mid,n,key,a[100],swap;
	printf("n = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Search key = ");
	scanf("%d",&key);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
		}
	}
	printf("After sorting :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(a[mid]<key)
		// {
			low=mid+1;
			// }
			else if(a[mid]==key)
			{
				printf("Key %d is found at position %d.\n",key,mid);
				break;
			}
			else
			// {
				high=mid-1;
				mid=(low+high)/2;
				// }
	}
	if(low>high)
	{
		printf("Key %d is not found in the array.\n",key);
	}
}
