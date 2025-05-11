#include<bits/stdc++.h>
using namespace std;
 vector<int> StringMatch(string text,string pattern){
     int n=text.length();
     int m=pattern.length();
        vector<int> ans;
        for(int i=0;i<=n-m;i++){
            bool flag=true;
            for(int j=0;j<m;j++){
                if(text[i+j]!=pattern[j]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                ans.push_back(i);
            }
        }
        return ans;
 }

int main(){
    string text;
    string pattern;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the pattern: ";
    cin >> pattern;
    vector<int> ans=StringMatch(text,pattern);
    cout << "Pattern found at indices: ";
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}