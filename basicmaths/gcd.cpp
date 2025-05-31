#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    while(m!=0){
        int t=m;
        m=n%m;
        n=t;
    }
    cout<<n;
    return 0;
}