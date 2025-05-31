#include <bits/stdc++.h>
using namespace std;

int longsubarrayk(vector<int>& arr,int k){
    int n=arr.size();
    map<int,int> preSum;
    int s=0;
    int maxL=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
        if(s==k){
            maxL=max(maxL,i+1);
        }
        int rem=s-k;
        if(preSum.find(rem)!=preSum.end())
{
    int len=i-preSum[rem];
    maxL=max(maxL,len);
}
if(preSum.find(s)==preSum.end()){
    preSum[s]=i;
}
    }
    return maxL;

}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int ans=longsubarrayk(arr,k);
    cout<<ans;




}