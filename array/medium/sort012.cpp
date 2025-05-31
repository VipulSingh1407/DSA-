#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int>&arr){
    int n=arr.size();
    int left=0;
    int right=n-1;
    int mid=0;
    while(mid<=right){
        if(arr[mid]==0){
            swap(arr[mid],arr[left]);
            mid++;
            left++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[right]);
            right--;
        }
    }
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

    sort012(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}