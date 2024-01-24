#include<stdio.h>
void main(){
	int a[20],i,n,j,small;
	printf("n = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Before sorting : \n");
	for(i=0;i<n;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				small=a[i];
				a[i]=a[j];
				a[j]=small;
			}
		}
	}
	printf("After sorting : \n");
		for(i=0;i<n;i++){
			printf("a[%d] = %d\n",i,a[i]);
			
		}
	
}
/*hello*/
