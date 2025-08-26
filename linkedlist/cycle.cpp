#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* next;
    int data;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
bool cycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!= nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
        return true;
    }
    }
        return false;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = head->next;
    if(cycle(head)){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}