#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t,n;
    cin>>t;
    while(t--)
    {
       cin>>n;
       string ks;
       for(int j=n;j>=0;j--)
       {
           if(j%3==0 && (n-j)%5==0)
           {
            ks="";
            for(int i=0;i<j;i++)
                ks+='5';
            for(int i=0;i<n-j;i++)
                ks+='3';
            break;   
            }
       }
       if(ks=="")
               cout<<-1<<endl;
       else 
               cout<<ks<<endl;
    }
    return 0;
}



