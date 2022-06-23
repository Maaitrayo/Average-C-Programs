#include<iostream>
using namespace std;

int binary_search(int a[], int n, int key){
    int lowerBoundary = 0, upperBoundary = n;
    while(lowerBoundary <= upperBoundary){
        int mid=(lowerBoundary+upperBoundary)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]>key)
            upperBoundary = mid-1;
        else
            lowerBoundary = mid+1;
    }
    return -1;
}

int main(){
    int n,key;
    cout << "Enter the size : ";
    cin >> n;
    int a[n];
    for(int i =0;i<n;i++)
        cin >> a[i];
    cout << "Enter the key: ";
    cin >> key;
    cout << binary_search(a,n,key);
}