//we will findmin and max of an array using all the approach which we can  use and will stuck to the best of all okay 
//we will write this prog also in functions for neat and professional practice
//starting the problem
#include <iostream>
using namespace std;
void MinAndMax(int arr[],int size){
    //using linear search method
    //consider first element to be Min
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];//updation of minimum
             
        }
        if(arr[i]>max){
            max=arr[i];//updation of maximum
        }
    }
    cout<<"Minimum element is :"<<min<<endl;
    cout<<"Maxixmum element is :"<<max<<endl;

}
//optimised way of minandmax reduced to 1.5n from 2n same O(n)
//pairing method of minandmax
//will add pairing optimized method soon
int main(){
    int arr[]={2,6,3,8,1,17,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    MinAndMax(arr,size);
}