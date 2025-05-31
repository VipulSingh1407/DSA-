#include <bits/stdc++.h>
using namespace std;

int longksum(vector<int>& arr,int k){
    int n=arr.size();
    int i=0;
    int j=0;
    int sum=arr[0];
    int maxLen=0;
    while(j<n){
        while(i<=j && sum>k){
            sum-=arr[i];
            i++;
        }
        if(sum==k){
            maxLen=max(maxLen,j-i+1);
        }
        j++;
        if(j<n) sum+=arr[j];
        
    }
    return maxLen;
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
    int k;
    cin>>k;

    int ans=longksum(arr,k);
   cout<<ans;
}