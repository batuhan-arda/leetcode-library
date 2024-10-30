class MinStack {
public:
    MinStack() {
        array.clear();
        minValue = INT_MAX;
    }
    
    void push(int val) {
        if (array.empty() || minValue >= val){
            minValue = val;
            minvaluearray.push_back(val);
        }

        array.push_back(val);

    }
    
    void pop() {
        if (!array.empty()) {
            if (array.back() == minValue) {
                minvaluearray.pop_back();
                minValue = minvaluearray.empty() ? INT_MAX : minvaluearray.back();
            }
            array.pop_back();
        }
    }
    
    int top() {
        return array.back();
    }
    
    int getMin() { 
        return minValue;
    }
private:
    int minValue;
    vector<int> array;
    vector<int> minvaluearray;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
