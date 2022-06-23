#include<iostream>
using namespace std;

float factorial(int a){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact*=i;
    }
    return fact;
}

void combination(int n1,int n2){
    float comb = factorial(n1)/(factorial(n1-n2)*factorial(n2));
    cout<<comb;
}

int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    combination(n1,n2);
}