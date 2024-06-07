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
 int arr[100]={1,2,3,4,5,6,7,8,9,10};
 int size=10;
int element;
cout<<"Enter an element to insertion : ";
cin>>element;

 int index;
 cout<<"Enter an index to insert in : ";
 cin>>index;

 display(arr,size);
 insertion(arr,size,element,index);
 size+=1;
 display(arr,size);
 return 0;
}
