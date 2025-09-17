//Leetcode 704
#include <iostream>
using namespace std;
int main(){
    int nums[5]={1,2,3,4,5};
    int target=5;
    int size=sizeof(nums)/sizeof(nums[0]);
    int start=0;
    int end=size-1;
        
    while(start<=end){

        int mid=start+(end-start)/2;
        if(target==nums[mid]){
            cout<<"Index is :"<<mid<<endl;

            return mid;
        }
        else if(target > nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
            
            
        }
        
        }
        cout<<-1<<endl;
        return -1;
}