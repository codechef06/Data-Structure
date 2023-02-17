#include<stdio.h>
	void SelectionSort(int A[],int n) {
		for(int i=0;i<n-1;i++) {
			int min=i;
			for(int j=i+1;j<n;j++) {
				if(A[min]>A[j]) {
					min=j;
				}
			}
			int temp=A[min];
			A[min]=A[i];
			A[i]=temp;
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
SelectionSort(A,n);
print(A,n);
}
