#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> //include this header to use bool datatype in c
int temp;
swap(int *big,int *small){ //swap ar[j] with ar[j+1]
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
		if(swapped==false)//if no swap occurs in a pass
			break;   //then sort is completed so break the loop
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
	bubbleSort(ar,n);
	printf("[+]The sorted array is >> \n");
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
}



