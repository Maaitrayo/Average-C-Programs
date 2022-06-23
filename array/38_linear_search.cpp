#include<iostream>
using namespace std;

int linear_serach(int a[], int n, int key){
    for(int i=0;i<n;i++){
        if(a[i]==key)
            return i;
    }
    return -1;
}

int main(){
    int n,key;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << "The the element to be found: ";
    cin >> key;
    cout << linear_serach(a,n,key);
}