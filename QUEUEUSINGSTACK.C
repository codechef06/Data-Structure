#include<stdio.h>
#include<stdlib.h>
int t1=-1,t2=-1;
int s[10],s2[10];
int k=0;
void enqueue(int x);
void dequeue();
void display();
void queue(){
        int n;
    printf("Welcome to Stack!\n");
    printf("Type 1 for push,2 for pop,3 for peek\n");
    scanf("%d",&n);
    switch(n){
        case(1):{
            int w;
            printf("enter the value to queue\n");
                scanf("%d",&w);
                enqueue(w);
        }
        break;
        case(2):dequeue();
        break;
        case(3):display();
        break;
    }
    int m;
    printf("To see the whole stack press 1, else press any key:\n");
    scanf("%d",&m);
    if(m==1){
        display();
    }
    int c;
    printf("To continue press 1 and To exit press 0 :\n");
    scanf("%d",&c);
    if(c==1){
        queue();
    }
    else{
        return;
    }
}
void push1(int value)
{
    if(t1>=9)
    printf("overflow");
    else
    {
        t1=t1+1;
        s[t1]=value;
    }
}
int pop1()
{
    int t=0;
    if(t1==-1)
    printf("underflow");
    else
    {
        t=s[t1];
        t1=t1-1;
    }
    return(t);
}
void push2(int value)
{
    if(t2>=9)
    printf("QUEUE overflow\n");
    else
    {
        t2=t2+1;
        s2[t2]=value;
    }
}
int pop2()
{
    int t=0;
    if(t2==-1)
    printf("Stack underflow\n");
    else
    {
        t=s2[t2];
        t2=t2-1;
    }
    return(t);
}
void enqueue(int x)
{
    push1(x);
    k++;
}
void dequeue()
{
    if(t1!=-1&&t2!=-1)
    {
        printf("queue is empty\n");
    }
    for(int i=0;i<k;i++)
    {
        int item1=pop1();
        push2(item1);
    }
    int item2=pop2();
    printf("the dequeue element is %d",item2);
    k--;
    for(int i=0;i<k;i++)
    {
        int item3=pop2();
        push1(item3);
    }
}
void display()
{

        for(int i=0;i<=t1;i++){
        printf("%d,",s[i]);
        }
        printf("\n");

}
void main()
{
    int q[10];
    printf("Shruti patel 2100320130165\n");
    queue();
        }
