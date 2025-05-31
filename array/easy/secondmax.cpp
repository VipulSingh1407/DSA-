#include <bits/stdc++.h>
using namespace std;

int secmax(vector<int>& arr){
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }   
    else if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }
    } 
    return max2;
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

    cout<<secmax(arr)<<endl;
}