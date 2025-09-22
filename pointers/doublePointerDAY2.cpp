#include <iostream>
using namespace std;
int main(){
    int i=5;
    int *ptr=&i;
    int **ptr2=&ptr;//double pointer
    int ***ptr3=&ptr2;//triple pointer
    cout<<"Printing Ptr :"<<ptr<<endl;
    cout<<"Address of i:"<<&i<<endl;
    cout<<"Address of Ptr:"<<&ptr<<endl;
    cout<<"Printing of Ptr2:"<<ptr2<<endl;
    cout<<"Address of Ptr2:"<<&ptr2<<endl;
    cout<<"Printing Ptr3:"<<ptr3<<endl;
    cout<<"Address of Ptr3:"<<&ptr3<<endl;
    //Concept of Null Pointer
    int *p=0;
    int first=110;
    // // *p=first;
    // cout<<*p<<endl;
    //return segmentation fault
    //use *p=&first no error;
    p=&first;
    cout<<*p<<endl;
}