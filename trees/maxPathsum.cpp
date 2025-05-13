#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int maxpathsum(node* root,int &maxi){
    if(root==NULL){
        return 0;
    }
    int lh=max(0,maxpathsum(root->left,maxi));
    int rh=max(0,maxpathsum(root->right,maxi));
    maxi=max(maxi,lh+rh+root->data);
    return max(lh,rh)+root->data;
  
}
int main(){
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    root1->left->left=new node(4);
    root1->left->right=new node(5);
    root1->right->left=new node(6);
    root1->right->right=new node(7);

    int maxi=-1;
    maxpathsum(root1,maxi);
    cout<<maxi;
}