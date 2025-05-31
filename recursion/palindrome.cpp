#include <bits/stdc++.h>
using namespace std;


int palindrome(int start,int end,string &str){
    if(start>=end){
        cout<<"Yes"<<endl;
        return 0;
    }
    if(str[start]!=str[end]){
        cout<<"No"<<endl;
        return 0;
    }
    palindrome(start+1,end-1,str);
}
int main(){
    string str;
    cin>>str;

    int n=str.length();
    int start=0;
    int end=n-1;
    palindrome(start,end,str);
}