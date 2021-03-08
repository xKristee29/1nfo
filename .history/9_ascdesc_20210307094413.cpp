#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int h[10][100005];

ifstream f("ascdesc.in");
ofstream g("ascdesc.out");

int n,x;

int main(){
    int i;
    f>>n;
    for(i=0;i<n;++i){
        f>>h[0][i];
    }
    return 0;
}