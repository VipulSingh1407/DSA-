#include <bits/stdc++.h>
using namespace std;

bool checksorted(vector<int>& arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
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
    cout<<checksorted(arr)<<endl;
}
