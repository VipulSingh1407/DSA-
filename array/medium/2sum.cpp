#include <bits/stdc++.h>
using namespace std;


bool twosum(vector<int>&arr,int t){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int i=0;
    int j=n-1;
    while(i<=j){
        int sum=arr[i]+arr[j];
        if(sum==t) return true;
        else if(sum>t){
            j--;
        }
        else{
            i++;
        }
    }
    return false;

}
int main(){

    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int t;
    cin>>t;
    bool ans=twosum(arr,t);
    cout<<ans;

}