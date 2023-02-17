#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
static int size = 0;
void add(int item)
{
    size++;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = item;
    if (head == NULL && tail == NULL)
    {
        head = tail = temp;
        tail->next = NULL;
        return;
    }
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}
void print()
{
    if (head == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }
    struct node *temp = head;
    printf("Linked List Looks like: ");
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("null");
    printf("\n");
}
void addAt(int i, int data)
{
    size++;
    int k = 0;
    struct node *temp = head;
    struct node *prev = NULL;
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = data;
    if (i == 0)
    {
        newnode->next = head;
        head = newnode;
        return;
    }
    if (i == size - 1)
    {
        tail->next = newnode;
        newnode->next = NULL;
        tail = newnode;
        return;
    }
    while (i != k)
    {
        prev = temp;
        temp = temp->next;
        k++;
    }
    newnode->next = temp;
    prev->next = newnode;
}

void addAtbegin(int item)
{
    size++;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = item;
    if (head == NULL)
    {
        head = tail = temp;
        return;
    }

    temp->next = head;
    head = temp;
}
int removelast()
{
    if (head == NULL)
    {
        printf("Linkd list is empty\n");
        return -1;
    }
    size--;
    struct node *temp = head;
    struct node *prev = NULL;
    while (temp != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    int val = tail->data;
    prev->next = NULL;
    tail = prev;
    return val;
}
int removeFirst()
{
    if (head == NULL)
    {
        printf("Linked list is empty\n");
        return -1;
    }
    size--;
    int val = head->data;
    head = head->next;
    return val;
}
int removeAt(int i)
{
    if (i == 0)
    {
        size--;
        return removeFirst();
    }
    else if (i == size - 1)
    {

        size--;
        return removelast();
    }

    int k = 0;
    struct node *temp = head;
    struct node *prev = NULL;
    while (i != k)
    {
        prev = temp;
        temp = temp->next;
        k++;
    }
    int val = temp->data;
    prev->next = temp->next;
    size--;
    return val;
}
void reverse()
{
    struct node *curr = head;
    struct node *prev = NULL;
    struct node *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
void main()
{
    printf("SHRUTI PATEL 2100320130165\n");
    add(1);
    add(2);
    add(3);
    print();
    reverse();
    print();
}
