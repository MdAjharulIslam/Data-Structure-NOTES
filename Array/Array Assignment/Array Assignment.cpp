#include<iostream>
using namespace std;
//print original array
void display(int arr[],int size){

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
if(arr[i]==size-1){
        cout<<",";
    }
}
   cout<<endl;
}
//function for insertion
int insertion(int arr[],int size,int element,int index){

for(int i=size;i>=index;i--){

    arr[i+1]=arr[i];
    }
    arr[index]=element;


}
//function for deletion
void deletion(int arr[],int size,int index){

for(int i=index;i<size;i++){

    arr[i]=arr[i+1];
    }
}

//function for sorting
void sorting(int arr[],int size){

    int to_do = size - 1;
bool did_swap = true;

    while (to_do > 0 && did_swap) {
        int index = 0;
        did_swap = false;
        while (index < to_do) {
            if (arr[index] > arr[index + 1]) {

                int temp = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = temp;
                did_swap = true;
            }
            index++;
        }
        to_do--;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
 int arr[50]={30,20,54,21,67,56,23,98,77,10};
 int size=10;


 display(arr,size);

int index;
 cout<<"Enter an index to insert : ";
 cin>>index;

 int element;
 cout<<"Enter an element to insert : "<<endl;
 cin>>element;

//for insert

 insertion(arr,size,element,index);
size++;
 display(arr,size);

//for delete

 cout<<"Enter an index to delete : ";
 cin>>index;

 deletion(arr,size,index);
size--;

cout<<"Array : ";
 display(arr,size);

//for sorting array

sorting(arr,size);



 return 0;
}
