#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int h[10][100005];

ifstream f("ascdesc.in");
ofstream g("ascdesc.out");

int n,x,maxa=0,maxd=0,as,ds;

int main(){
    int i;
    f>>n;
    for(i=1;i<=n;++i){
        f>>h[0][i];
    }
    for(i=1;i<=n;++i){
        if(h[0][i]>maxa){
            maxa=h[0][i];
        }
        else{
            as+=maxa
        }
    }
    return 0;
}