#include<stdio.h>
#include<stdlib.h>
void merge(int ar[],int left,int mid ,int right){
	int i,j,k;
	int ln=mid-left+1;
	int rn=right-mid;
	int Lar[ln],Rar[rn];
	for(i=0;i<ln;i++)
		Lar[i]=ar[left+i];
	for(j=0;j<rn;j++)
		Rar[j]=ar[mid+1+j];
	i=0;j=0;k=left;
	while(i<ln && j<rn){
		if(Lar[i]<=Rar[j]){
			ar[k]=Lar[i];
			i++;
		}else{
			ar[k]=Rar[j];
			j++;
		}
		k++;
	}
	while(i<ln){
		ar[k]=Lar[i];
		i++;k++;
	}
	while(j<rn){
		ar[k]=Rar[j];
		j++;k++;
	}
}
void mergeSort(int ar[],int left,int right){
	if(left<right){
		int mid=left+(right-left)/2;
		mergeSort(ar,left,mid);
		mergeSort(ar,mid+1,right);
		merge(ar,left,mid,right);
	}
}

void main(){
	int i,n,*ar;
	printf("[+]Enter the number of elements(<1000) >> ");
	scanf("%d",&n);
	ar=(int *)malloc(n*sizeof(int));
	printf("[+]Enter the numbers >> \n");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	mergeSort(ar,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
}
