#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
void inorder(Node* root,vector<int>&v){
    if(root == nullptr){
        return ;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
Node* swap(Node* root){
    if(root == nullptr){
        return nullptr;
    }
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    swap(root->left);
    swap(root->right);
    return root;
}
bool isMirror(Node* root1,Node* root2){
    vector<int>v;
    inorder(root1,v);
    Node* root3 = swap(root2);
    vector<int>v1;
    inorder(root3,v1);
    int j =0;
    if(v.size() != v1.size()) return false;
    for(int i =0;i<v.size();i++){
        if(v[i] != v1[j++]) return false;
    }
    return true;
}
int main() {
    // Example trees
    // Tree 1:      1
    //             / \
    //            2   3
    // Tree 2:      1
    //             / \
    //            3   2

    // Construct Tree 1
    Node* root1 = new Node(1);
    root1->left = new Node(2);

    // Construct Tree 2
    Node* root2 = new Node(1);
    root2->right = new Node(2);


    // Call your isMirror function here
    bool result = isMirror(root1, root2);

    cout << (result ? "True" : "False") << endl;
}