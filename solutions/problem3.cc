#include <iostream>
#include <vector>
#include <string>
#include <assert.h>
using namespace std;


struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};
vector<int> data;
int pos;
void serialize(Node* root) {
    if (root == nullptr)
    {
        data.push_back(-9999);
    }
    else{
        data.push_back(root->val);
        serialize(root->left);
        serialize(root->right);
    }
}

int helper(string& data_local) {
        int pos = data_local.find(',');
        int val = stoi(data_local.substr(0,pos));
        data_local = data_local.substr(pos+1);
        return val;
}

Node* deserialize() {
    if (data[pos]==-9999) {
        return nullptr;
        } 
        else {
            Node* node = new Node(data[pos]);
            pos++;
            node->left = deserialize();
            pos++;
            node->right = deserialize();
            return node;
        }
}


int main() {
    struct Node *root = new Node(20);
    
    root->left               = new Node(8);
    root->right              = new Node(22);
    root->left->left         = new Node(4);
    root->left->right        = new Node(12);
    root->left->right->left  = new Node(10);
    root->left->right->right = new Node(14);
    serialize(root);
    pos=0;
    cout<<endl;
    assert(deserialize()->left->left->val == root->left->left->val);
    
    return 0;
}