#include <bits/stdc++.h>
using namespace std;

int maxcons1(vector<int>& arr){
    int n=arr.size();
    int maxCnt=0;
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt1++;
        }
        else{
            maxCnt=cnt1;
            cnt1=0;
        }
    }
    return maxCnt;
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
    int ans=maxcons1(arr);
    cout<<ans;
}