#include <bits/stdc++.h>

using namespace std;

ifstream f("cosuri.in");
ofstream g("cosuri.out");

vector<int> v;
int n,cerinta,x,sum,prevsum,ex=4294967000;

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

void cer2(){
    int i;
    for(i=1;i<=2*n;++i){
        f>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    prevsum=v[v.size()-1]+v[0];
    for(i=1;i<n;++i){
        sum=v[v.size()-1-i]+v[i];
        if(prevsum!=sum){
            g<<"NU";
            i=2*n;
            break;
        }
        if(abs(v[2*n-1-i]-v[i])<ex){
            ex=abs(v[v.size()-1-i]-v[i]);
        }
    }
    if(i<2*n){
        g<<"DA"<<'\n'<<ex;
    }
}

int main(){
    f>>cerinta>>n;
    if(cerinta==1){
        cer1();
    }
    else{
        cer2();
    }
    return 0;
}