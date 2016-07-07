#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,d1=0,d2=0,d=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
           if(a_i==a_j)
               d1=d1+a[a_i][a_j];
           if(a_i+a_j==(n-1))
               d2=d2+a[a_i][a_j];
       }
    }
    d=d1-d2;
    if(d<0)
        d=d*(-1);
    cout<<d;
    return 0;
}

