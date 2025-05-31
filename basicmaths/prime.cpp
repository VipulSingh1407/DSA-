#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=1){
        cout<<n<<" is not prime";
    }
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        cout<<n<<" is not prime";
        break;
       
    }
    else{
        cout<<n<<" is prime";
        break;

    }

}

   
}