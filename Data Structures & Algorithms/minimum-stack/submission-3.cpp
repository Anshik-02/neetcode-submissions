class MinStack {
public:
stack<int>st;
stack<int>mainStack;
    MinStack() {
   
    }
    
    void push(int val) {
        st.push(val);
         val =std:: min(val, mainStack.empty() ? val : mainStack.top());
        mainStack.push(val);
    }
    
    void pop() {
        st.pop();
        mainStack.pop();
        
    }
    
    int top() {
       return st.top();
        
    }
    
    int getMin() {
    return mainStack.top();

       
    }
};
