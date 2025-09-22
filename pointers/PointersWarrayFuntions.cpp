#include <iostream>
using namespace std;
void print(int *p){
    cout<<"Print Function Running"<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"Print Function Stop"<<endl;
}
int main(){
    int arr[10]={3,7,9};
    //pointer with Array
    cout<<"Address of Array :"<<arr<<endl;
    cout<<"Address of Array:"<<&arr[0]<<endl;
    cout<<*arr<<endl;//print the arr[0] element
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;
    //arr[i]=*(arr+i);
    //i[arr]=*(i+arr);
  //sizeof(arr)=no of elements*4
  //sizeof(ptr)=8 alaways;
  int a[20]={1,2,3,4,5,6};
  cout<<"......."<<endl;
  cout<<a<<endl;
  cout<<&a<<endl;
  cout<<&a[0]<<endl;

  int *p=a;
  cout<<"......."<<endl;
  cout<<p<<endl;
  cout<<&p<<endl;
  cout<<*p<<endl;
  
  cout<<"####"<<endl;
  int arr2[10];
//   ar2=arr2+1; Raises Error
//   cout<<arr2<<endl;
  int *ptr2=arr;
  cout<<ptr2<<endl;
  cout<<ptr2+1<<endl;

  cout<<"Character Array"<<endl;
  //cout funtion have different implementation in terms of array and char
  char ch[7]="aditya";
  cout<<ch<<endl;
  char *c=&ch[0];
  //print entire string
  cout<<c<<endl;

  //Function passing pointer
  int value=5;
  int *p2=&value;
  print(p2);





}