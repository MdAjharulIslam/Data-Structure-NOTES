#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;

};

void linkedListTraversal(struct Node *ptr){

while(ptr!=NULL){

    printf("the element is %d\n",ptr->data);
   ptr= ptr->next;
}
}

struct Node* deleteAtFirst(struct Node*head){

struct Node* ptr=head;
head=head->next;
free(ptr);
return head;

}

struct Node* deleteAtLast(struct Node*head){

if(head==NULL){
    return NULL;
}
if(head->next==NULL){
    free(head);
    return NULL;
}

struct Node *p=head;
struct Node *q=head->next;
while(q->next!=NULL){
    p=p->next;
    q=q->next;
}
p->next=NULL;
free(q);
return head;


}

struct Node *deleteAtIndex(struct Node *head,int index){
if(index==0){
    return head;
}

struct Node* p=head;
struct Node*q=head->next;

for(int i=0;i<index-1;i++){

    if(q==NULL){
        return head;
    }

    p=p->next;
    q=q->next;
}

p->next=q->next;
free(q);
return head;
}


struct Node* deleteAtValue(struct Node *head,int value){

if(head==NULL){
    return NULL;
}

if(head->data==value){
        free(head);
    return head;
}

struct Node *p=head;
struct Node *q=head->next;

while(q!=NULL && q->data!=value){
    p=p->next;
    q=q->next;
}
if(q!=NULL){
    p->next=q->next;
    free(q);

}
return head;
}


int main(){

struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 1;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);


    head = deleteAtFirst(head);

    printf("Linked list after deletion at first\n");
    linkedListTraversal(head);

    printf("Linked list after deletion at last \n");
    head = deleteAtLast(head);
    linkedListTraversal(head);

    printf("Linked list after deletion at index \n");
    head = deleteAtIndex(head, 1);
    linkedListTraversal(head);


printf("Linked list after deletion at value \n");
    head = deleteAtvalue(head, 8);
    linkedListTraversal(head);
return 0;
}
