#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int>m;
    int n;
    cin>>n;
    int type, y;
    string name;
    for (int i = 0; i < n; i++) {

    cin >> type;

    cin >> name;
    map<string, int>::iterator itr = m.find(name);

    if (type == 1) {
        cin >> y;
        if (itr == m.end()) {
            m.insert(make_pair(name, y));
        }
        else {
            itr->second += y;
        }
    }
    else if (type == 2) {
        if (itr != m.end()) {
            m.erase(name);
        }
    }
    else {
        if (itr == m.end()) {
            cout << 0 << endl;
        }
        else
        {
            cout << itr->second << endl;
        }
    }
}

return 0;
}

