#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        int a=0,b=0,c=0;
        cin >> i >> j;
        for(int k=i;k<=j;k++){
            if(width[k]==1)
                a++;
            else if(width[k]==2)
                b++;
            else
                c++;
        }
        if(a>0)
            cout<<"1"<<endl;
        else if(b>0)
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;
    }
    return 0;
}

