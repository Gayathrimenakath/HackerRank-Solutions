#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,a,b,c;
    cin>>t;
    while (t--){
        cin>>n>>a>>b;
        for (int i = 0; i < n; i++){
            if (a == b){
                cout<<a*(n - 1)<<" ";
                break;
            }
            else if (a>b)
                c = (b*(n - 1 - i)) + (a*i);
            
            else
                c = (a * (n - i - 1)) + (b*i);
            cout<<c<<" ";
        }
 
        cout<<endl;
    }
    return 0;
}

