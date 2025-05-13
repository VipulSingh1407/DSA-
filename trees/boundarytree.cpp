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




vector<int> boundary(Node* root) {
    vector<int> ans;
    if (root == NULL) return ans;

    // Add the root node
    ans.push_back(root->data);

    // Add left boundary nodes
    Node* curr = root->left;
    while (curr) {
        if (curr->left || curr->right) {
            ans.push_back(curr->data);
        }
        if (curr->left) {
            curr = curr->left;
        } else {
            curr = curr->right;
        }
    }

    // Add leaf nodes
    stack<Node*> s;
    s.push(root);
    while (!s.empty()) {
        Node* node = s.top();
        s.pop();
        if (!node->left && !node->right) {
            ans.push_back(node->data);
        }
        if (node->right) s.push(node->right);
        if (node->left) s.push(node->left);
    }

    // Add right boundary nodes in reverse order
    vector<int> rightBoundary;
    curr = root->right;
    while (curr) {
        if (curr->left || curr->right) {
            rightBoundary.push_back(curr->data);
        }
        if (curr->right) {
            curr = curr->right;
        } else {
            curr = curr->left;
        }
    }
    reverse(rightBoundary.begin(), rightBoundary.end());
    ans.insert(ans.end(), rightBoundary.begin(), rightBoundary.end());

    return ans;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> ans = boundary(root);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}
