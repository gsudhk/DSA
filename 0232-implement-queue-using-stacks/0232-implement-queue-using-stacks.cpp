class MyQueue {
public:
    stack<int>s;
    stack<int>s1;
    MyQueue() {
    }
    
    void push(int x) {
        while(!s1.empty()){
            int ele = s1.top();
            s.push(ele);
            s1.pop();
        }
        s.push(x);
        while(!s.empty()){
            int ele1 = s.top();
            s1.push(s.top());
            s.pop();
        }
    }
    
    int pop() {
       int ans = s1.top();
       s1.pop();
       return ans;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
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