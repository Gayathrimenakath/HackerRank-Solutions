#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>s;
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a==1)
            {
            s.insert(b);
        }
        else if(a==2){
            set<int>::iterator itr=s.find(b); 
            //if(itr!=s.end())
                s.erase(b);
        }
        else{
            if(s.find(b)== s.end()){
                cout<<"No"<<endl;}
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}

