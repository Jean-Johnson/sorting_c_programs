#include<stdio.h>
#include<stdio.h>
void insertSort(int ar[],int n){
	int i,j,k;
	for(i=1;i<n;i++){
		k=ar[i];
		j=i-1;
		while(j>=0 && ar[j]>k){
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=k;
	}
}
void main(){
	int i,n,*ar;
	printf("[+]Enter the number of elements >> ");
	scanf("%d",&n);
	printf("[+]Enter the number >>\n");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	insertSort(ar,n);
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
}
