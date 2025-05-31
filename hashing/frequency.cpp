#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<char> arr;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        arr.push_back(x);
    }
    unordered_map<char,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(auto it=freq.begin();it!=freq.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}