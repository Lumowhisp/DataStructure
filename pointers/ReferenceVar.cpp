#include <iostream>
using namespace std;
// int& func(int a){
//     int num=a;
//     int& ans=num;
//     return ans;
// }//generate warning-error
// int* fun(int n){
//     int*ptr=&n;
//     return ptr;
// }//generate warning-error
    int main(){
    int i=5;
    int&j=i;//referrence var
    cout<<++i<<endl;
    cout<<++j<<endl;
    
    // func(n);
    // fun(n);
    ///////////////////////
    //Notes:-
    //int arr[n]; is bad practice as user is assigning size of array in runtime which is not good we should know it on compile time okay 
    //whenever program start it carry memory -> memory is of two type stack and heap -> stack choti memory laata hain haep zyada laata hain->int arr[n] stack se ek choti memeory laayega aur prog memeory chote hone karad crash ho jayega

    //making array of var size we use heap memeory by using new keyword this is dynamic memory allocation
    //new char return address note here we can give name okay like int i=5 we can create new int ;
    //so we will use pointer like char * ch=new char; => pointer stack mein banta hain lekin new char heap mein char 1 byte liye pointer 8 byte liya in 64 but system and 4 byte in 32 bit system in total we have 9 byte space 
    //int * i=new int; => 8+4=12 byte space
    //int * arr = new int[5];
    int n;
    cin>>n;
    //variable size array;
    int * arr = new int[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    //printing array
    for(int i=0; i<n; i++){
        cout<< arr[i];
    }
    return 0;

    //releasing memeory 
    // delete []arr;








}