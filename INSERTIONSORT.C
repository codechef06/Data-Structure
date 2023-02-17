#include<stdio.h>
void InsertionSort(int A[],int n) {
		for(int i=1;i<n;i++) {
			int curr=A[i];
			int prev=i-1;
			while(prev>=0&&A[prev]>curr) {
				A[prev+1]=A[prev];
				prev--;
			}
			A[prev+1]=curr;
		}
	}
void print(int A[],int n) {
		printf("Sorted Array:\n");
		for(int i=0;i<n;i++) {
			printf("%d\t",A[i]);
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
InsertionSort(A,n);
print(A,n);
}
