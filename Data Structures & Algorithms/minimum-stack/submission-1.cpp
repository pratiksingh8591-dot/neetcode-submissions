class MinStack {
public:
stack<long long>st;
         long long mini;
    MinStack() {
         mini=LLONG_MAX;
    }
    
    void push(int val) {
        if(st.empty()){
            mini=val;
            st.push(val);
        }
        else if(val<mini){
            st.push(2LL*val-mini);
            mini=val;
        }
        else{
            st.push(val);
        }
    }
    
    void pop() {
        if(st.empty()){return ;}
        long long n=st.top();
        st.pop();
        if(n<mini){
            mini=2*mini-n;
        }
    }
    
    int top() {
        if(st.empty()){return -1;}
        long long x=st.top();
        if(x<mini){
            return mini;
        }
        else{
            return x;
        }
    }
    
    int getMin() {
        return mini;
    }
};
