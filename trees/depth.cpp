#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val):
        data(val),
        left(nullptr),
        right(nullptr){}
    
};
int depth(Node* root){
    if(!root){
        return 0;
    }
    int l = depth(root->left);
    int r = depth(root->right);
    return max(l,r)+1;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(4);
    int m = depth(root);
    cout << "the depth of the tree is " << m << endl;
}
// IF YOU WANT TO FIND THE NUMBER OF EDGES RETURN -1 INSTEAD OF 1