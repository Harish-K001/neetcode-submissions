class MinStack {
private : 
    stack<int> Mainstack;
    stack<int> Ministack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        Mainstack.push(val);
        if(Ministack.empty() || val <= Ministack.top()){
            Ministack.push(val);
        }    
    }
    
    void pop() {
        if(Mainstack.top() == Ministack.top()){
            Ministack.pop();
        }
        Mainstack.pop();
    }
    
    int top() {
        return Mainstack.top();
    }
    
    int getMin() {
        return Ministack.top();
    }
};
