#include<stdio.h>
#include<stdlib.h>

struct Node *f=NULL;
struct Node *r=NULL;
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node*ptr)
{

    printf("printing the queue using linked list \n");

    while(ptr!=NULL)
    {
        printf("elements: %d\n",ptr->data);
       ptr= ptr->next;
    }

}

void enQueue(int val)
{

    struct Node *n=(struct Node*)malloc(sizeof(struct Node));

    if(n==NULL)
    {
        printf("Queue is full.\n");
    }
    else
    {
        n->data=val;
        n->next=NULL;
        if(f==NULL)
        {
            f=r=n;
        }
        else
        {
            r->next=n;
            r=n;
        }

    }

}


int deQueue()
{
    int a=-1;
    struct Node*ptr=f;
    if(f==NULL)
    {
        printf("this Queue is empty.\n");
    }
    else
    {
        f=f->next;
        a=ptr->data;
        free(ptr);


    }
    return a;
}

int main()
{

    enQueue(100);
    enQueue(200);
    deQueue();
    linkedListTraversal(f);
    return 0;
}
