#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter an arithmatic operator: "<<endl;
    cin>>c;
    int n1, n2;
    cout<<"Enter two numbers: "<<endl;
    cin>>n1>>n2;

    switch (c)
    {
    case '+':
        cout<<"The sum is: "<<n1+n2<<endl;
        break;
    case '-':
        cout<<"The difference is: "<<n1-n2<<endl;
        break;
    case '*':
        cout<<"The product is: "<<n1*n2<<endl;
        break;
    case '/':
        cout<<"The qoutient is: "<<n1/n2<<endl;
        break;
    
    default:
        cout<<"Enter a valid operator";
        break;
    }
    return 0;
}