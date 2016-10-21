#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,k=0;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(c[i]==c[j]){
                c.erase(c.begin()+j);
                k++;
                n--;
                break;
            }
        }
    }
    cout<<k<<endl;
    return 0;
}

