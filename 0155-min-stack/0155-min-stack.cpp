class MinStack {
public:
    stack<int> s;
    int min = INT_MAX;
   // int min2 = INT_MAX;
   vector<int>arr;
   int i=-1;
    MinStack() {}

    void push(int val) {
        s.push(val);
        if (val <= min) {
            //min2 = min;
            min = val;
            arr.push_back(min);
            i++;
        }
    }

    void pop() {
        int n = s.top();
        s.pop();
        if (n == min){
            arr.pop_back();
            i--;
            if(i>=0){
            min=arr[i];}
            else{
            min=INT_MAX;
            }
            //min=arr.back();
            
            
        }
    }

    int top() { return s.top(); }

    int getMin() { return min; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */