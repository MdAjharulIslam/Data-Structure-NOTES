#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int element){
int low,mid,high;
low=0;
high=size-1;
while(low<=high){

    mid=(low+high)/2;
    if(arr[mid]==element){
        return mid;
    }

if(arr[mid]<element){
    low=mid+1;
}
else{
high=mid-1;
}
}
return -1;
}


int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int size=sizeof(arr)/sizeof(arr[0]);
int element;
cout<<"Enter an element to search : ";
cin>>element;

int index=binarysearch(arr,size,element);

cout<<"the element : "<<element<<" was found at index : "<<index<<endl;

return 0;
}
