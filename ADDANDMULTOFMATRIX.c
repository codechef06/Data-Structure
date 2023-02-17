#include<stdio.h>
void add(int A[3][3],int B[3][3],int row,int column){
 int C[row][column];
 for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        C[i][j]=0;
        C[i][j]+=A[i][j]+B[i][j];
    }
 }
 printf("addition is :\n");
 for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){

        printf("%d ",C[i][j]);
    }

    printf("\n");
    }
}
void multi(int A[3][3],int B[3][3],int row,int column,int row1,int column1){
    int C[row][column1];
    for(int i =0;i<row;i++){
        for(int j=0;j<column1;j++){
            C[i][j]=0;
            for(int k=0;k<column;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column1;j++){
            printf("%d  ",C[i][j]);
        }
        printf("\n");
    }
}

int main(void){
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
      int row1,column1;
    printf("Enter number of rows\n");
    scanf("%d",&row1);
    printf("Enter number of columns\n");
    scanf("%d",&column1);
    int B[row1][column1];
    printf("Enter array\n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
        scanf("%d",&B[i][j]);
            }
        }
            if(row==row1&&column==column1){
                        printf("Addition is possible and is equals to:\n");
                        add(A,B,row,column);
                }
            else{
            printf("Addition not possible");
                }
        if(column==row1){
        printf("Multiplication is possible and is equals to:\n");
            multi(A,B,row,column,row1,column1);
        }
        else{
            printf("Multiplication is not possible\n");
        }

    return 0;
}
