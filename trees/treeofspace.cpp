#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int parents = -1;
    bool locked = false;
    int lockeduid = -1;
    int lockedChild = 0;
    vector<int> child;
};

class TreeImplementation
{
unordered_map<string, int> NameIndex;
    vector<string> IndexName;
    vector<Node> tree;
    int m;
private:
bool lockedChild(int i,int id,vector<int>& lockedC){
   queue<int> q;
   q.push(i);
    while(!q.empty()){
         int n=q.front();
         q.pop();
        for(int c:tree[n].child){
            if(tree[c].locked){
                if(tree[c].lockeduid!=id){
                    return false;
                }
                lockedC.push_back(c);
            }
            if(tree[c].lockedChild>0|| tree[c].locked){
                q.push(c);
            }
        }
    }
    return !lockedC.empty();
}
public:
    
    TreeImplementation(int n, int m, vector<string> names)
    {
        this->m = m;
        tree.resize(n);
        IndexName=names;
        for (int i = 0; i < n; i++)
        {
            NameIndex[names[i]] = i;
            if (i != 0)
            {
                int p = (i - 1) / m;
                tree[i].parents = p;
                tree[p].child.push_back(i);
            }
        }
    }

    bool lock(string &name, int uid)
    {
        int i = NameIndex[name];
        if (tree[i].locked)
        {
            return false;
        }
        if (tree[i].lockedChild > 0)
        {
            return false;
        }
        int anc = tree[i].parents;
        while (anc != -1)
        {
            if (tree[anc].locked)
            {
                return false;
            }
            anc = tree[anc].parents;
        }
        tree[i].locked = true;
        tree[i].lockeduid = uid;

        anc = tree[i].parents;
        while (anc != -1)
        {
            tree[anc].lockedChild++;
            anc = tree[anc].parents;
        }
        return true;
    }

    bool unlock(string &name, int uid)
    {
        int i = NameIndex[name];
        if (!tree[i].locked)
        {
            return false;
        }
        if (tree[i].lockeduid != uid)
        {
            return false;
        }
        tree[i].locked = false;
        tree[i].lockeduid = -1;

        int anc = tree[i].parents;
        while (anc != -1)
        {
            tree[anc].lockedChild--;
            anc = tree[anc].parents;
        }
        return true;
    }
    bool upgrade(string &name,int uid){
        int i=NameIndex[name];
        if(tree[i].locked){
            return false;
        }
        if(tree[i].lockedChild==0){
            return false;
        }
        vector<int>lockedC;
        if(!lockedChild(i,uid,lockedC)){
            return false;
        }
        for(int c:lockedC){
            unlock(IndexName[c],uid);
        }
        return lock(name,uid);
    }
};


int main(){
    int n,m;
    cin>>n>>m;
    vector<string> names(n);
    for(int i=0;i<n;i++){
        cin>>names[i];
    }
    TreeImplementation tree(n,m,names);
    int q;
    cin>>q;
    vector<string> results;
      for (int i = 0; i < q; i++) {
        int op, uid;
        string name;
        cin >> op >> name >> uid;

        if (op == 1) {
            results.push_back(tree.lock(name, uid) ? "true" : "false");
        } else if (op == 2) {
            results.push_back(tree.unlock(name, uid) ? "true" : "false");
        } else if (op == 3) {
            results.push_back(tree.upgrade(name, uid) ? "true" : "false");
        } else {
            results.push_back("Invalid Operation");
        }
    }

    // Print all results after all queries are processed
    for (const string& res : results) {
        cout << res << endl;
    }

    return 0;   
}
