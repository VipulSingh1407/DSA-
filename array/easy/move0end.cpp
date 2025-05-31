#include <bits/stdc++.h>
using namespace std;


vector<int> move0end(vector<int> arr){
    int n=arr.size();
    int j=-1;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }

    }
    if(j==-1) return arr;

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;

        }
    }
    return arr;
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
   vector<int> ans= move0end(arr);
   for(int i=0;i<ans.size();i++){
    cout<<ans[i];
   }

}