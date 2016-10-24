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
    int t;
    long m=0,s=0;
    cin >> t;
    if(t>=1 && t<=10){
    for(int a0 = 0; a0 < t; a0++){
        long b,w;
        cin >> b >> w;
        long x,y,z;
        cin >> x >> y >> z;
        m=(b*x)+(w*y);
        if(z>=x && z>=y){
            s=(b*x)+(w*y);
        }
        else if((z<=x && z>y)||(z<x && z==y)){         
             s=(b*(z+y))+w*y;
        }
        else if((z>x && z<=y)||(z==x && z<y)){         
             s=(b*x)+(w*(x+z));
        }
        else if(z<x && z<y){
             if(x<y){
                s=(b*x)+(w*(x+z));
             } 
             else{
                s=(b*(z+y))+w*y;
             }
        }
        if(m<s)
            cout<<m<<endl;
        else
            cout<<s<<endl;
    }
    }
    return 0;
}

