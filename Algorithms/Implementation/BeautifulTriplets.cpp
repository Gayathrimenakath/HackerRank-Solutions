#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,d,s[10000],j=0,k=0,c=0,m;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    if(m>=0 && m<=20000){
    if(d>=1 && d<=20){
        for(int i=0;i<n-2;i++){
            for(j=i+1;j<n-1;j++){
                if(s[j]-s[i]==d){
                    for(k=i+2;k<n;k++){
                        if(s[k]-s[j]==d)
                            c++;
                    }    
                }              
            }           
        }
        cout<<c<<endl;
    }
    }
    return 0;
}

