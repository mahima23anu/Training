class MyQueue {
public:
    int q[1000000];
    int f=-1;
    int r=-1;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(f==-1){
            f=0;
        }
            r=r+1;
            q[r]=x;
    }
    
    int pop() {
        if(empty())
        return -1;
        int x=q[f];
        if(f==r){
            f=-1;
            r=-1;
            // return -1;
        }
        else {
            f=f+1;
        }
        return x;
        
    }
    
    int peek() {

        if(!empty())
        return q[f];
        else return -1;
    }
    
    bool empty() {
        if(f==-1 && r==-1)
        return true;
        else return false;
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