#include<stdio.h>
int temp;
void swap(int *big,int *small){
	temp=*big;
	*big=*small;
	*small=temp;
}
int partition(int ar[],int start,int end){
	int pivot=ar[end];//selecting the last element as pivote
	int j,i=(start-1); //to keep track of smallest element index
	for(j=start;j<=end-1;j++){
		if(ar[j]<=pivot){
			i++;
			swap(&ar[i],&ar[j]);
		}
	}
	swap(&ar[i+1],&ar[j]);
	return (i+1);
}
void quickSort(int ar[],int start,int end){
	if(start<end){
		int Pindex=partition(ar,start,end);
		quickSort(ar,start,Pindex-1);
		quickSort(ar,Pindex+1,end);
	}
}
void main(){
	int ar[1000],n,i;
	printf("[+]Enter the limit(<1000) >> ");
	scanf("%d",&n);
	printf("[+]Enter the numbers >> \n");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	quickSort(ar,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
}
