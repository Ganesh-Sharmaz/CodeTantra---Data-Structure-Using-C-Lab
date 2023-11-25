#include<stdio.h>
void main() {
int a[20], i, n, j, temp;
printf("n = ");
scanf("%d", &n);
// Write the for Loop to read array elements
for(i=0;i<n;i++){
printf("a[%d] = ",i);
scanf("%d",&a[i]);
}
printf("Before sorting : \n");
// Write the for Loop to display array elements before sorting
for(i=0;i<n;i++){
printf("a[%d] = %d\n",i,a[i]);
}
//write the code to sort elements
for(i=1;i<=n-1;i++){
j-i;
while(j>0 && a[j-1]>a[j]){
temp-a[j];
a[j]=a[j-1];
a[j-1]=temp;
j--;
}
}
printf("After sorting : \n");

For(i=0;i<n-1;i++){
printf("a[%d] = %d\n",i,a[i]);
}
}
