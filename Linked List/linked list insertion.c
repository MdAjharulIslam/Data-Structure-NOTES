#include <stdio.h>
#include <stdlib.h>

struct Node
{

    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("The Element is :%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = head;

    return ptr;
}

struct Node *insertAtlast(struct Node *head, int data)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = NULL;
    p->next = ptr;
    return head;
}


struct Node* insertatindex(struct Node* head, int data, int index) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;

    while (i != index - 1) {
        p = p->next;
        i++;
    }
    ptr->data=data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}


struct Node* insertatafter(struct Node* head,  struct Node* prevNode, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next=prevNode->next;
   prevNode->next=ptr;


    return head;
}
int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;
    printf("linked list before insertion\n");
    linkedListTraversal(head);

    printf("linked list after insertion at head\n");

    head = insertAtFirst(head, 100);
    linkedListTraversal(head);

    printf("linked list after insertion at last\n");

    head = insertAtlast(head, 50);
    linkedListTraversal(head);


    printf("linked list after insertion at index\n");

    head=insertatindex(head,500,3);
    linkedListTraversal(head);


    printf("linked list after insertion at after\n");

    head=insertatafter(head,second,300);
    linkedListTraversal(head);

    return 0;
}
