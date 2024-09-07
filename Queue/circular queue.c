#include<stdio.h>
#include<stdlib.h>

struct queue{
int size;
int f;
int r;
int* arr;
};

int isFull(struct queue *q){
if((q->r+1)%q->size==q->f){
    return 1;
}
return 0;
}

int isEmpty(struct queue *q){
if(q->r==q->f){
    return 1;
}
return 0;
}

void enqueue(struct queue *q,int val){

if(isFull(q)){
    printf("this queue is full\n");
}else{

q->r=(q->r+1)%q->size;
q->arr[q->r]=val;
printf("Enqued element: %d\n",val);
}

}

int dequeue(struct queue *q){
    int a=-1;
if(isEmpty(q)){
    printf("this queue is empty");
}else{
q->f=(q->f+1)%q->size;
a=q->arr[q->f];
return a;

}

}

int main(){
struct queue q;
q.size=4;
q.f=q.r=0;

q.arr=(int*)malloc(q.size*sizeof(int));

enqueue(&q,100);
enqueue(&q,100);
enqueue(&q,100);
enqueue(&q,100);
enqueue(&q,100);
enqueue(&q,100);
printf("dequeued element is: %d\n",dequeue(&q));


isFull(&q);
isEmpty(&q);


return 0;
}
