#include<stdio.h>
void transpose(int A[3][3],int row,int column){
    int C[column][row];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            C[j][i]=0;
            C[j][i]=A[i][j];
        }
    }
    printf("Transposed Matrix is:\n");
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            printf("%d  ",C[i][j]);
        }
        printf("\n");
    }
}
int main(){
    printf("SHRUTI PATEL 2100320130165\n");
    int row,column;
    printf("Enter number of rows\n");
    scanf("%d",&row);
    printf("Enter number of columns\n");
    scanf("%d",&column);
    int A[row][column];
    printf("Enter array\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        scanf("%d",&A[i][j]);
            }
        }
    printf("Array looks like:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
    transpose(A,row,column);
    return 0;
}
