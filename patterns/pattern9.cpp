#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
     for(int i=0;i<n;i++){
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }

         for(int l=0;l<(2*i+1);l++){
            cout<<"*";
        }

         for(int k=0;k<(n-i-1);k++){
            cout<<" ";
        }
        cout<<endl;
    }

      for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
          for(int k=0;k<(2*n-2*i-1);k++){
            cout<<"*";
        }
          for(int l=0;l<i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}