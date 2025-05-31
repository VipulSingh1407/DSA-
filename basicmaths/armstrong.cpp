#include <bits/stdc++.h>
using namespace std;
int countdigits(int n){
    int cnt=0;
    while(n>0){
        n=n/10;
        cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;


      int t=n;
    int cnt=countdigits(n);
    int sum=0;
  
    while(n>0){
        int lastdigit=n%10;
        sum+=(int)(pow(lastdigit,cnt)+0.5);
        n=n/10;
    }
    cout<<sum<<endl;
    if(t==sum){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
}
