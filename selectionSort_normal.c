#include<stdio.h>
#include<stdlib.h>
int temp;
void swap(int *oldsmall, int *newsmall){
	temp=*oldsmall;
	*oldsmall=*newsmall;
	*newsmall=temp;
}
void selectSort(int ar[],int n){
	int i,j,small;
	for(i=0;i<n-1;i++){
		small=i;
		for(j=i+1;j<n;j++){
			if(ar[j]<ar[small])
				small=j;
		}
		if(i!=small)
			swap(&ar[i],&ar[small]);
	}
}
void main(){
	int i,n,*ar;
	printf("[+]Enter the number of elements >> ");
	scanf("%d",&n);
	ar=(int *)malloc(n*sizeof(int));
	printf("[+]Enter the elements >> \n");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	selectSort(ar,n);
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
}
