#include <bits/stdc++.h>

using namespace std;

ifstream f("cosuri.in");
ofstream g("cosuri.out");

multiset<int> s;
int n,cerinta,x;

int main(){
    f>>cerinta>>n;
    if(cerinta==1){
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
            else
        }
    }
    return 0;
}