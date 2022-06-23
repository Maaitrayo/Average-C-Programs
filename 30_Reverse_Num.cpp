#include<iostream>
using namespace std;

int main(){

    int n, reverse=0,a=0;
    cout<<"Enter a number for reversing it: "<<endl;
    cin>>n;
    a = n;

    while(n>0){
        int ld = n%10;
        reverse = reverse*10 + ld;
        n = n/10;
    }    
    cout<<"The original number is: "<<a<<endl;
    cout<<"The reversed number is: "<<reverse;
    return 0;
}