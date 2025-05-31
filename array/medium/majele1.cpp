#include <bits/stdc++.h>
using namespace std;


int majele1(vector<int>& arr){
  int n=arr.size();
  unordered_map<int,int>mpp;
  for(int i=0;i<n;i++){
    mpp[arr[i]]++;
  }
  int check=n/2;
  for(auto it:mpp){
    if(it.second>check){
        return it.first;
    }
  }
  return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
          int x;
          cin>>x;
          a.push_back(x);
    }
    int ans=majele1(a);
    cout<<ans;
}