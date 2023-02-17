#include<stdio.h>
int Q[20];
int max=19;
int front=-1,rear=-1;
void Enqueue();
void Dequeue();
void Display();
void Queue();
void Queue(){
    printf("Welcome to Queue\n");
    int n;
    printf("press 1 for Enqueue,2 for Dequeue,3 for Display\n");
    scanf("%d",&n);
    switch(n){
        case(1):Enqueue();
        break;
        case(2):Dequeue();
        break;
        case(3):Display();
        break;
    }
    int m;
    printf("To continue press 1 and To exit press any other number\n");
    scanf("%d",&m);
    if(m==1){
        Queue();
    }
    else{
        return;
    }
}
void Enqueue(){
    if(rear==max){
        printf("Queue overflow\n");
        return;
    }
    else{
    rear++;
    if(front==-1){
        front++;
    }
    printf("Enter data\n");
    scanf("%d",&Q[rear]);
    }
}
void Dequeue(){
    if(rear==front==-1){
        printf("Queue underflow\n");
        return;
    }
    else{
    printf("Dequeued element is:%d\n",Q[front]);
    front++;
    }
}
void Display(){
    printf("Queue looks like\n");
    for(int i=front;i<=rear;i++){
        printf("%d ",Q[i]);
    }
    printf("\n");
}
void main(){
    printf("SHRUTI PATEL 2100320130165\n");
    Queue();
}
