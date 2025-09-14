#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
int main(){
    cout<<"Program to find find whether ith bit is set or not"<<endl;
    int x=13;
    int bitpostn=4;
    string rem="";
    while (x>0){
        if(x%2==1){
            rem+="1";
        }
        else{
            rem+="0";
        }

        x=x/2;

    }
    cout<<rem;
    cout<<endl<<"Reversing it buddy"<<endl;
    reverse(rem.begin(),rem.end());
    cout<<rem<<endl;
    //checking set bit
    //using bruteforce
    if(bitpostn<rem.length()){
   
        if(rem[bitpostn]=='1'){
            cout<<"bit is set";
        }
        else{
            cout<<"not set";
        }
    }
    else{
        cout<<"out of range";

    }
   

}