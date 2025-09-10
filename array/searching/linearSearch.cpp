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


}