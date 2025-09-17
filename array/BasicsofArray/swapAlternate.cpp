#include <iostream>
using namespace std;
int main(){
    int arr[]={5,6,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i+1<size;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    //printing
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}