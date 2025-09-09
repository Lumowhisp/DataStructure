//prime or not
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number:"<<endl;
    cin>>n;
    //A number is said to be a prime if it is divisible by 1 and itself
    //running a loop from 2 to n-1 and checking if it is divisible by any number if yes the number is not prime
    //if number is less than 1 then it not prime 
    //sufficient condition is to run loop only till sqrt(n)
    bool flag=true;
    if(n<=1){
        cout<<"Number is not prime"<<endl;
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Number is not Prime"<<endl;
            flag=false;
            break;
        }
        
    }
    if(flag){
        cout<<"Number is prime";}
        else{
            cout<<"Not Prime"<<endl;
        }
    }
