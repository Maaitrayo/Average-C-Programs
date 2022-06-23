// 1                        
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include<iostream>
using namespace std;

float factorial(int a){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact*=i;
    }
    return fact;
}

float combination(int n1,int n2){
    float comb = factorial(n1)/(factorial(n1-n2)*factorial(n2));
   return comb;
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}