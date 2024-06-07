#include<iostream>
using namespace std;
int main(){

int arr[]={10,20,30,40,50};

int sizearr=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<sizearr;i++){

cout << "arr[" << i << "] = " << arr[i] << endl;

}

return 0;
}
