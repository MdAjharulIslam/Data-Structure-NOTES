#include<iostream>
using namespace std;
int main(){

int arr[]={10,20,30,40,50};
int number;
cout<<"Enter a number : ";
cin>>number;
int sizearr=sizeof(arr)/sizeof(arr[0]);

cout<<" Old array : ";
for(int i=0;i<sizearr;i++){
    cout <<arr[i]<<" ";
}
cout<<endl;
cout<<"Updated array : ";
for(int i=0;i<sizearr;i++){
    arr[1]=number;
    cout<<arr[i]<<" ";

}
return 0;
}
