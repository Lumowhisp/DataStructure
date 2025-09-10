#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int size;
    cout<<"Enter Size:"<<endl;
    cin>>size;

    cout<<"Enter Number:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    if (arr[0]==0){
        cout<<"Duck Number";
    }
    else{
        cout<<"No";
    }

}