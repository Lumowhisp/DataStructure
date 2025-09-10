#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,34,7,4,6,4,7,37};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}