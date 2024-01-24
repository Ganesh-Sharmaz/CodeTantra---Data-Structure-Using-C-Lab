#include<stdio.h>
int linear_search(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		return i;
	}
	return -1;
}
int main()
{
	int n,key;
	printf("n = ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Search key : ");
	scanf("%d",&key);
	int index=linear_search(arr,n,key);
	if(index==-1)
	{
		printf("Key %d is not found.\n",key);
	}
	else
	{
		printf("Key %d is found at position %d.\n",key,index);
	}
	return 0;
}
