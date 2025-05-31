#include <bits/stdc++.h>
using namespace std;


int linearsearch(vector<int>& arr,int k){

    int n=arr.size();

    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
            break;
        }
    }
    return -1;
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

    cout<<linearsearch(arr,k);
}