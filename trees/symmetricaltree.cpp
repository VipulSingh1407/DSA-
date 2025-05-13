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


bool isSameTree(node* p, node* q) {
    if (p == NULL && q == NULL) return true;
    if (p == NULL || q == NULL) return false;
    return (p->data == q->data) && isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
}
bool symmetrical(node*root){
    return root==NULL || isSameTree(root->left,root->right);
}


int main(){
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(2);
    root1->left->left=new node(3);
    root1->left->right=new node(4);
    root1->right->left=new node(4);
    root1->right->right=new node(3);

    ;
    cout<<symmetrical(root1);
}