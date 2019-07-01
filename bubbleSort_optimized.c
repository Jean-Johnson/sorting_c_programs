#include<stdio.h>
#include<stdbool.h>
int temp;
swap(int *big,int *small){
	temp=*big;
	*big=*small;
	*small=temp;
}
void bubbleSort(int ar[], int n){
	bool swapped;
	int i,j;
	for(i=0;i<n-1;i++){
		swapped=false;
		for(j=0;j<n-i-1;j++){
			if(ar[j]>ar[j+1]){
				swap(&ar[j],&ar[j+1]);
				swapped=true;
			}
		}
		if(swapped==false)
			break;
	}
}
void main(){
	int i,n,ar[1000];
	printf("[+]Enter the number of elements(<1000) >> ");
	scanf("%d",&n);
	printf("[+]Enter the elements >> \n");
	for(i-0;i<n;i++)
		scanf("%d",&ar[i]);
	bubbleSort(ar,n);
	printf("[+]The sorted array is >> \n");
	for(i=0;i<n;i++)
		printf("%d",ar[i]);
}



