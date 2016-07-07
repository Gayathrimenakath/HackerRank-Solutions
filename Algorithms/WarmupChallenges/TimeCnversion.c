#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;

int main(){
    int hh,mm,ss;
    char c[2];
    cin >> hh>>mm>>ss;
    cin>>c;
    if(!strcmp(c,"PM") && hh != 12)
        hh=hh+12;
    if(!strcmp(c,"AM") && hh == 12)
        hh = 0;
    cout<<hh<<":"<<mm<<":"<<ss;
    return 0;
}

