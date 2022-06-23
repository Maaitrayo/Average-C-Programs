#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int a[5];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int minNO=INT_MAX;
    int maxNO=INT_MIN;
    for(int i=0;i<n;i++){
        maxNO=max(maxNO,a[i]);
        minNO=min(minNO,a[i]);
    }

    cout << "The maximun number is: " << maxNO << endl;    
    cout << "The minimum number is: " << minNO;    
}


