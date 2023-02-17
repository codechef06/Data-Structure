#include<stdio.h>
void Merge(int A[],int si,int mid,int ei);
void print(int A[],int n) {
		for(int i=0;i<n;i++) {
			printf("%d  ",A[i]);
		}
		printf("\n");
	}
	void MergeSort(int A[],int si,int ei) {
		if(si>=ei) {
			return;
		}
		int mid=si+(ei-si)/2;
		MergeSort(A,si,mid);
		MergeSort(A,mid+1,ei);
		Merge(A,si,mid,ei);
	}
    void Merge(int A[],int si,int mid,int ei) {
		int temp[ei-si+1];
		int i=si;
		int j=mid+1;
		int k=0;
		while(i<=mid&&j<=ei) {
			if(A[i]<A[j]) {
				temp[k]=A[i];
				i++;
			}
			else {
				temp[k]=A[j];
				j++;
			}
			k++;
		}
		while(i<=mid) {
			temp[k++]=A[i++];
		}
		while(j<=ei) {
			temp[k++]=A[j++];
		}
		for(k=0,i=si;k<ei-si+1;k++,i++) {
			A[i]=temp[k];
		}
	}
void main(){
printf("SHRUTI PATEL 2100320130165\n");
int n;
printf("Enter number of terms:\n");
scanf("%d",&n);
int A[n];
printf("Enter Array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
}
MergeSort(A,0,n-1);
	printf("Sorted Array:");
		print(A,n);
}
