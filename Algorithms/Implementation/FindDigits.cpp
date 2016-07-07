#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int T, m, num, a, count=0;
    cin>>T;
    for(int i=0;i<T;i++){ 
        cin>>num;
        m=num;
        while(num){  
            a=num%10;
            num=num/10;
            if(a!=0)
                if(m%a==0)
                    count++;
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}

