#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};


vector<vector<int>> zigzag(Node* root) {
    vector<vector<int>> ans;
    if (root == NULL) return ans;

    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++) {
            Node* node = q.front();
            q.pop();
            level.push_back(node->data);
            // Add child nodes to the queue
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        ans.push_back(level);
      
    }
    for(int i=1;i<ans.size();i+=2){
        reverse(ans[i].begin(),ans[i].end());
    }

    return ans;
}



int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

   vector<vector<int>> ans=zigzag(root);
   for(int i=0;i<ans.size();i++){
       for(int j=0;j<ans[i].size();j++){
           cout<<ans[i][j]<<" ";
       }
       cout<<endl;
   }
    return 0;
}