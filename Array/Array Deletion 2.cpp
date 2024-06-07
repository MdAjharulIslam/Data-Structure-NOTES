#include<iostream>
using namespace std;

void display(int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

   cout<<endl;
}

void deletion(int arr[],int size,int index){

for(int i=index;i<size;i++){

    arr[i]=arr[i+1];
    }

}
int main(){
 int arr[30]={10,22,30,40,50,60,70,80,90,100};
 int size=10;
 int index;
 cout<<"Enter an index to delete : ";
 cin>>index;

 display(arr,size);
 deletion(arr,size,index);
 size-=1;
 display(arr,size);
 return 0;
}
