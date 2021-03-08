#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> h,hasc,hd;

ifstream f("ascdesc.in");
ofstream g("ascdesc.out");

int n,x;

int main(){
    int i;
    f>>n;
    for(i=0;i<n;++i){
        f>>x;
        h.push_back(x);
    }
    return 0;
}