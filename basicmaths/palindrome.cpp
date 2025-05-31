#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t=n;
    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;
    }
   if(t==rev){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}