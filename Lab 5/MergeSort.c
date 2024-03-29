#include<stdio.h>
#include<stdlib.h>
void display(int arr[], int n){
	int i;
	for(i=0;i<n;i++)
	{        
		printf("%d ",arr[i]);
		
	}
	printf("\n");
}
void merge(int arr[], int l, int m, int h){
	int i,j,k;        
	int n1=m-l+1;        
	int n2=h-m;        
	int L[n1],R[n2];
	for(i=0;i<n1;i++){
		L[i]=arr[l+i];
	}
	for(j=0;j<n2;j++){
		R[j]=arr[m+j+1];
	}
	i=0;        
	j=0;
	k=l;
	while(i<n1&&j<n2){
		if(L[i]<=R[j]){
			arr[k]=L[i];
			i++;
		}
		else{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k]=L[i];
		i++;
		k++;
		while(j<n2){
			arr[k]=R[j];
			j++;
			k++;
		}
	}
}
void splitAndMerge(int arr[], int l, int h){
	if(l<h){
		int m = l+(h-l)/2;
		splitAndMerge(arr,l,m);
		splitAndMerge(arr,m+1,h);
		merge(arr,l,m,h);
	}
}
