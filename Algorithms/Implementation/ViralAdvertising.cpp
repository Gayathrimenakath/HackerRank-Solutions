#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,l=0,m=5;
    cin>>n;
    if(n>=1 && n<=50){
        for(int i=0;i<n;i++){
            l =l+floor(m/2); 
            m= floor(m/2)*3;          
        }
        cout<<l<<endl;
    }
    return 0;
}

