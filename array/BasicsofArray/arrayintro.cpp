//Array is a collection of same type of data set
//implementing array
#include<iostream>
using namespace std;
int main(){
int arr1[6];//created arrat of size 6
int arr2[]={1,2,3,4,5,6};//init array by elements
//user input array

int arr3[10];
//looping
for(int i=0;i<5;i++){
    cout<<"Enter element"<<i<<endl;
    cin>>arr3[i];
    
}
//printing array
cout<<"[";
for(int i=0;i<5;i++){
   
    cout<<arr3[i]<<",";
    
}cout<<"]";
}

