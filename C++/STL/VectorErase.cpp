#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int n;
    cin>>n;
    int a,x,m,s,l;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cin>>x;
    v.erase(v.begin()+(x-1));
    cin>>m>>s;
    v.erase(v.begin()+(m-1),v.begin()+(s-1));
    l=v.size();
    cout<<l<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

