class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>s1;
    stack<int>s2;
    void push(int x) {
        while(!s2.empty()){
            int ele = s2.top();
            s1.push(ele);
            s2.pop();
        }
        s1.push(x);
        while(!s1.empty()){
            int ele1 = s1.top();
            s2.push(ele1);
            s1.pop();
        }
    }
    
    int pop() {
        int popped = s2.top();
        s2.pop();
        return popped;
    }
    
    int peek() {
        return s2.top();
    }
    
    bool empty() {
        return s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */