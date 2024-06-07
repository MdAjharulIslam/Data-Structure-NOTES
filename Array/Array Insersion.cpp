#include<iostream>
using namespace std;

void display(int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
   cout<<endl;
}

int insertion(int arr[],int size,int element,int index){

for(int i=size;i>=index;i--){

    arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main(){
 int arr[100]={1 , 2, 3, 4, 5};
 int size=5;
 int element=10;
 int index=2;
 display(arr,size);
 insertion(arr,size,element,index);
 size+=1;
 display(arr,size);
 return 0;
}
