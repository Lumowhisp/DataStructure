#include<iostream>
using namespace std;

int main(){
    //Array input 
    int arr[10];
    for(int i=0;i<5;i++){
        cout<<"Enter Number:"<<i+1<<endl;
        cin>>arr[i];

    }
    //Array Output
    cout<<"Array is"<<endl;
    cout<<"[";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<",";

    } 
    cout<<"]";
    //searching Array
    //Simple Method
    //logic:-
    //We will be storing element to be searched in target var then traverse the array and copare each element with the the target if found element searched
    int target;
    bool isFound=false;
    cout<<"Enter Target:";
    cin>>target;
    int i;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++){
        if(arr[i]==target){
            isFound=true;
            break;
        }
    }
    if(isFound){
        cout<<"Element found at index"<<i<<endl;
    }


}