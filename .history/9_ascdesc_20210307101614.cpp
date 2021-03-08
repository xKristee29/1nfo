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
            h[1][i]=maxa;
            h[2][i]=as;
        }
        else{
            as+=maxa-h[0][i];
            h[1][i]=maxa;
            h[2][i]=as;
        }
        if(h[0][n-i]>maxd){
            maxd=h[0][n-i];
            h[3][n-i]=maxd;
            h[4][n-i]=ds;
        }
        else{
            ds+=maxd-h[0][n-i];
            h[3][n-i]=maxd;
            h[4][n-i]=ds;
        }
    }
    for(i=1;i<=n;++i){
        if(h[1][i]>h[3][i]){
            x=h[2][i]+h[4][i+1];
        }
        else if(h[1][i]<h[3][i]){
            x=h[2][i-1]+h[4][i];
        }
        else
        g<<x<<' ';
    }
    return 0;
}