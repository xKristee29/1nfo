#include <bits/stdc++.h>

using namespace std;

ifstream f("cosuri.in");
ofstream g("cosuri.out");

multiset<int> s;
int n,cerinta,x;

void cer1(){
    int min1=1000005,
        min2=1000005,mins,
        max1=-1,
        max2=-1,maxs;
    for(int i=1;i<=2*n;++i){
        f>>x;
        if(x<min1){
            min2=min1;
            min1=x;
        }
        else if(x<min2){
            min2=x;
        }
        if(x>max2){
            max1=max2;
            max2=x;
        }
        else if(x>max1){
            max1=x;
        }
    }
    mins=min1+min2;
    maxs=max1+max2;
    g<<mins<<' '<<maxs;
}

int main(){
    f>>cerinta>>n;
    if(cerinta==1){
        cer1();
    }
    else
    return 0;
}