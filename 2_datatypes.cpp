#include<iostream>
using namespace std;

int main(){
    int a; //variable declaration
    a = 12; // variable initialization 
    cout<<"The size of int is: "<<sizeof(a)<<endl;

    float b;
    cout<<"The size of float is: "<<sizeof(b)<<endl;
    
    char c;
    cout<<"The size of char is: "<<sizeof(c)<<endl;
    
    bool d;
    cout<<"The size of boolean is: "<<sizeof(d)<<endl;

    long e;
    cout<<"The size of long is: "<<sizeof(e)<<endl;

    short f;
    cout<<"The size of short is: "<<sizeof(f)<<endl;

    double g;
    cout<<"The size of double is: "<<sizeof(g)<<endl;
    return 0;
}