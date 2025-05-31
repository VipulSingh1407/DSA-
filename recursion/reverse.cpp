#include <bits/stdc++.h>
using namespace std;

void swap1(int start,int end,vector<int> &arr){
    if(start>=end){
        return;
    }
    swap(arr[start],arr[end]);
    swap1(start+1,end-1,arr);
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
    int start=0;
    int end=n-1;
    swap1(start,end,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}