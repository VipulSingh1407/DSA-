#include <bits/stdc++.h>
using namespace std;

int maxElement(vector<int>& arr){
  int max=INT_MIN;
  for(int i=0;i<arr.size();i++){
    if(arr[i]>max){
        max=arr[i];
    }
  }
  return max;
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
    int ans=maxElement(arr);
    cout<<ans<<endl;
}