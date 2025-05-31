#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int min_freq=INT_MAX;
    int max_freq=INT_MIN;
    int min_freq_num=0;
    int max_freq_num=0;
    for(auto it=freq.begin();it!=freq.end();it++){
        if(it->second<min_freq){
            min_freq=it->second;
            min_freq_num=it->first;
        }
        if(it->second>max_freq){
            max_freq=it->second;
            max_freq_num=it->first;
        }
    }
    cout<<"Minimum frequency: "<<min_freq_num<<" "<<min_freq<<endl;
    cout<<"Maximum frequency: "<<max_freq_num<<" "<<max_freq<<endl;
}