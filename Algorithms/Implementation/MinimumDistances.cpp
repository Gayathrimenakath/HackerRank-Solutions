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
    int n;
    cin >> n;
    int s=10000,k=1;
    vector<int> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
    for(int j = 0;j < n;j++){
       for(int i = 0;i < n;i++){
           if(i!=j&& A[i]==A[j]){
               if(s>abs(i-j)){
                    s=abs(i-j);
                    k=0;
                }     
           }
       }
    }
    if(k!=1)   
        cout<<s;
    else
        cout<<"-1";
    return 0;
}
