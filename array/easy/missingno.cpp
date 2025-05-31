#include <bits/stdc++.h>
using namespace std;

int missno(vector<int>& arr){
    int n=arr.size();
    int sn=(n*(n+1))/2;
    int arrsum=0;
    for(int i=0;i<n;i++){
        arrsum+=arr[i];
    }
    return sn-arrsum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);

    }

    int ans=missno(arr);
    cout<<ans;
}