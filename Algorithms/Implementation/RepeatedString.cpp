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
    string s,s1;
    cin >> s;
    long n,k=0,l=0;
    cin >> n;
    int len=0;
    len=s.length();
    long p=n/len;
    long q=n%len;
    for(long i=0;i<len;i++)
        {
        if(s[i]=='a')
            k++;
    }
    if(q!=0)
        {
        for(long j=0;j<q;j++)
        {
            if(s[j]=='a')
            l++;
        }
    }
    cout<<k*p+l<<endl;
    return 0;
}

