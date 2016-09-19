#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    if(t>=1 && t<=10){
        for(int i=0;i<t;i++){
            int n,a[200000];
            cin>>n;
            int s=0,s2=0,c=0,j,k;
            for(int i=1;i<=n;i++){
                cin>>a[i];
                s=s+a[i];
            }
            for(int i=1;i<=n;i++){
                s=s-a[i];
                if(s==s2){
                    c++;  
                    break;
                }              
                s2=s2+a[i];
            }
            if(c==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
       }         
    }
    return 0;
}

