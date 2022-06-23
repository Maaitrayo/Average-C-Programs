#include<iostream>
using namespace std;

void fibonacci(int n){
    int t1,t2;
    t1=0;
    t2=1;

    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        int new_term = t1+t2;
        t1=t2;
        t2=new_term;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
}
