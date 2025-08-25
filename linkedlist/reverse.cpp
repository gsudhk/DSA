#include <bits/stdc++.h>
using namespace std;
struct Node{
    Node* next;
    int data;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
Node* reversed(Node* head){
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
int main() {
    vector<int>arr = {1,2,3,4,5};
    Node* head = new Node(arr[0]);
    Node* curr = head;
    for(int i = 1; i < arr.size(); i++){
        curr ->next = new Node(arr[i]);
        curr = curr->next;
    }
    Node* ll = reversed(head);
    while(ll != nullptr){
        cout << ll->data << " " ;
        ll = ll->next;
    }
}