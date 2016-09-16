#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,a;
    cin>>t;
    for(a=0;a<t;a++)
        {
        int m,n,x;
        cin>>m;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
            {
            cin>>x;
            v.push_back(x);
        }
        
        for(int i=0;i<n;i++)
            {
            for(int j=i+1;j<n;j++)
                {
                if(v[i]+v[j]==m && i<j)
                    {
                    cout<<i+1<<" "<<j+1<<endl;
                }
            }
        }
    }
    return 0;
}
