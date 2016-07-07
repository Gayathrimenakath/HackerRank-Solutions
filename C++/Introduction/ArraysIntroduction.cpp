#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int arr[n],b=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n/2; ++i) {
        b = arr[n-i-1];
        arr[n-i-1] = arr[i];
        arr[i] = b;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

