#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int total = n/c;
        int wrappers = total;
        while(wrappers >= m) { 
            total =total+ (wrappers / m);
            int left = wrappers % m;
            wrappers = (wrappers / m) + left;
        }
        cout<<total<<endl;
    }
    return 0;
}

