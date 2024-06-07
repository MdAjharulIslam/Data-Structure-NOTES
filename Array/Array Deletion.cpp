#include<iostream>
using namespace std;

void display(int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

   cout<<endl;
}

void deletion(int arr[],int size,int index){

for(int i=index+1;i<size;i++){

    arr[i-1]=arr[i];
    }

}
int main(){
 int arr[50]={1,2,3,4,5,6,7,8,9};
 int size=9;
 int index=3;

 display(arr,size);
 deletion(arr,size,index);
 size-=1;
 display(arr,size);
 return 0;
}
