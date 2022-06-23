#include <iostream>
using namespace std;

int fac=1;
int factorial(int a){
        for(int i=2;i<=a;i++){
            fac=fac*i;
        }
        return fac;
    }

int main(){
    int a;
    cout<<"Enter a number to find its factorial: ";
    cin>>a;
    cout<<factorial(a);
    return 0;
}
