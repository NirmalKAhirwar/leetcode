class MinStack {
    
// public:
//     int minEle = INT_MAX;
//     vector<int> v;
//     int index = 0;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         this->minEle = min(minEle, val);
//         this->v.push_back(val);
//         this->index++;
//     }
    
//     void pop() {
//         this->v.pop_back();
//         this->index--;
//     }
    
//     int top() {
//         auto t = this->v.back();
//         return t;
        
//     }
    
//     int getMin() {
//         this->minEle = *min_element(this->v.begin(), this->v.end());
//         return this->minEle;
//     }

private:
    stack<pair<int,int>>st;

public:
    MinStack() {
    }

    void push(int val) {
        if(st.empty()){
            st.push(make_pair(val,val));
        }else{
            int t=st.top().second;
            if(val<t){
                t=val;
            }
            st.push(make_pair(val,t));
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return  st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */