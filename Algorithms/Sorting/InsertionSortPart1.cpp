#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {


}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }
       int N = _ar.size();
int i,j;
int value;
for(i=1;i<N;i++)
{
    value=_ar[i];
    j=i-1;
    while(j>=0 && value<_ar[j])
    {
        _ar[j+1]=_ar[j];
        j=j-1;
        for(int k=0;k<N;k++)
        {
            cout<<_ar[k]<<" ";

        }
        cout<<endl;
    }
    _ar[j+1]=value;
}
for(j=0;j<N;j++)
{
    cout<<_ar[j]<<" ";
}
return 0;
}

