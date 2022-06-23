#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n,num=0;
    cout<<"Enter a number to check if its armgstrong or not: "<<endl;
    cin>>n;

    while(n>0){
        int lastDigit = n%10;
        cout<<lastDigit<<endl;
        num += pow(lastDigit, 3);
        cout<<num<<endl;
        n = n/10;
        cout<<n<<endl;
    }
    cout<<num;
//     if(num == copy)
//         cout<<"It is an armgstrong number"<<num<<endl;
//     else
//         cout<<"It is not an armgstrong number"<<endl;
 }