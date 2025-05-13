#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int check(Node * root){
    if (root==NULL){
        return 0;
    }
    int lh=check(root->left);
    int rh=check(root->right);
    if (lh==-1 || rh==-1){
        return -1;
    }
    if(abs(lh-rh)>1){
        return -1;
    }
    return max(lh,rh)+1;

}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(5);

    if(check(root)>-1){
        cout<<"The tree is balanced";
    }
    else{
        cout<<"The tree is not balanced";
    }
}