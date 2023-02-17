#include<stdio.h>
int Q[3];
int front=-1,rear=-1;
int max=3;
void Enqueue();
void Dequeue();
void Display();
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
    if(front==(rear+1)%max){
        printf("Queue OverFLow\n");
        return;
    }
    else{
        if(front==-1){
            front++;
        }
        rear=(rear+1)%max;
        printf("Enter Element to be inserted\n");
        scanf("%d",&Q[rear]);
    }
}
void Dequeue(){
    if(front==rear==-1){
        printf("Queue UnderFlow\n");
        return;
    }
    else{

        printf("Dequeued Element is %d\n",Q[front]);
        front=(front+1)%max;
    }
}
void Display(){
    if(rear<front){
        for(int i=front;i<max;i++){
            printf("%d  ",Q[i]);
        }
        for(int i=0;i<=rear;i++){
            printf("%d  ",Q[i]);
        }

    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d  ",Q[i]);
        }
    }
}
void main(){
    printf("SHRUTI PATEL 2100320130165\n");
    Queue();
}
