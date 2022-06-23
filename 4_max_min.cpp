#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;

    if(a>b){
        if (a>c)
        {
            cout<<"The max number is: "<<a<<endl;
        }
        
    }
    else{
        if (b>c)
        {
            cout<<"The max number is: "<<b<<endl;
        }
        if (c>b)
        {
            cout<<"The max number is: "<<c<<endl;
        }
        
    }
    
return 0;
}