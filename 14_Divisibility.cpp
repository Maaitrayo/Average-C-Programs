#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;

    if(a%2==0 && a%3==0){
        cout<<a<<" is divisible by both"<<endl;
    }
    else if(a%2==0){
        cout<<a<<" is divisible by 2"<<endl;
    }
    else if(a%3==0){
        cout<<a<<" is divisible by 3"<<endl;
    }
    else{
        cout<<a<<" is not divisible by any"<<endl;
    }
return 0;
}   