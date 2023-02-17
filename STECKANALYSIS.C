#include<stdio.h>
int A[50];
int sp=-1;
int max=50;
void push();
void pop();
void peek();
void printstack();
void stack(){
    int n;
    printf("Welcome to Stack!\n");
    printf("Type 1 for push,2 for pop,3 for peek\n");
    scanf("%d",&n);
    switch(n){
        case(1):push();
        break;
        case(2):pop();
        break;
        case(3):peek();
        break;
    }
    int m;
    printf("To see the whole stack press 1, else press any key:\n");
    scanf("%d",&m);
    if(m==1){
        printstack();
    }
    int c;
    printf("To continue press 1 and To exit press 0 :\n");
    scanf("%d",&c);
    if(c==1){
        stack();
    }
    else{
        return;
    }
}
void printstack(){
    printf("Stack looks like:\n");
    for(int i=sp;i>=0;i--){
        printf("%d\n",A[i]);
    }
}
int isempty(){
    if(sp==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(){
    if(sp==max){
        return 1;
    }
    else{
        return 0;
    }
}
 void push(){
    if(isfull()==1){
         printf("Could not insert data, Stack is full.\n");
    }
    else{
        sp++;
        int w;
        printf("Enter data in num:\n");
        scanf("%d",&w);
        A[sp]=w;
    }
}
 void pop(){
    if(isempty()==1){
        printf("Could not pop data,stack is empty\n");
    }
    else{
        int k=A[sp];
        printf("data is:\n");
        printf("%d\n",k);
        sp--;
    }
}
 void peek(){
    int l=A[sp];
    printf("Value at top is:\n");
    printf("%d\n",l);
}

void main(){
    printf("SHRUTI PATEL 2100320130165/n");
    stack();
}
