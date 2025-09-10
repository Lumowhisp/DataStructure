#include <iostream>
using namespace std;
//we will make a prog in which we will use binary searching which is optimized way of searching an element in the array with Tc of O(log(n)) and space complexity of O(1).
//starting the program
// approach :- we will make a function of binary search then we will call it in a main function
//Note:- for array need to sorted okay.this is one disadvantage of this we will also check how to sort the array in further prog
void binarySearch(int arr[],int size){
    int target;
    cout<<"Enter number to be Searched:";
    cin>>target;
    bool isFound=false;
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(target==arr[mid]){
            isFound=true;
            break;

        }
        else if(target<arr[mid]){
            end=mid-1;
            mid=start+(end-start)/2;

        }
        else{
            start=mid+1;
            mid=start+(end-start)/2;

        }
        
    }
    if(isFound){
        cout<<"Element found at Index : "<<mid;
    }
    else{
        cout<<"Element not found"<<endl;
    }

}
int main(){
    int arr[]={2,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    binarySearch(arr,size);
}