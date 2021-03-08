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
    as=ds=0;
    for(i=1;i<=n;++i){
        if(h[0][i]>maxa){
            maxa=h[0][i];
        }
        else{
            as+=maxa-h[0][i];
            
            h[2][i]=as;
        }
        if(h[0][n-i]>maxd){
            maxd=h[0][n-i];
        }
        else{
            ds+=maxd-h[0][n-i];
            h[2][n-i]=ds;
        }
    }
    return 0;
}