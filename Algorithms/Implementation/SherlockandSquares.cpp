#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,a,b;
    cin>>t;
    for(int i=0;i< t;i++){
    int a,b,c=0;
    cin >> a >> b;
    for(int j=a;j<=b;++j){
       int temp = sqrt(j);
       if(temp*temp == j){
           c++;
           j=j+temp*2 ;
       }
    }
    cout<<c<<endl;
    }
    return 0;
}


