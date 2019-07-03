#include<stdio.h>
int temp;
void swap(int *oldsmall, int *newsmall){
	temp=*oldsmall;
	*oldsmall=*newsmall;
	*newsmall=temp;
}
void selectSort(int ar[],int n){
	int i,j,small,big;
	for(i=0;i<n/2;i++){ //half loop
		small=i;big=n-i-1;
		for(j=i;j<n-i;j++){
			if(ar[j]>=ar[big])
				big=j;
			if(ar[j]<=ar[small])
				small=j;
		}
		if(small==j-1){
			if(big==i){ //eg if array=[big...small]or like [.big....small.] etc
				swap(&ar[small],&ar[big]);
			}else{//eg if [i.....small] or like [.i....small.] etc
				swap(&ar[i],&ar[small]);
				swap(&ar[n-i-1],&ar[big]);
			}
		}else if(big==i){//eg if [big....n-i-1] or like [.big...n-i-1.] etc
				swap(&ar[n-i-1],&ar[big]);
				swap(&ar[i],&ar[small]);
		}else{
			swap(&ar[i],&ar[small]);
			swap(&ar[big],&ar[j-1]);
		}
	}
}
void main(){
	int i,n,ar[1000];
	printf("[+]Enter the number of elements(<1000) >> ");
	scanf("%d",&n);
	printf("[+]Enter the elements >> \n");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	selectSort(ar,n);
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
}
