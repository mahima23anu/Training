class MyCircularQueue {
public:
    int f=-1,r=-1;
    int size;
    int q[100000];
    MyCircularQueue(int k) {
        size=k;
    }
    
    bool enQueue(int value) {
       
        if(isFull())
        return false;
        else{
            if(r==-1) f=0;
            r=(r+1)%size;
            q[r]=value;
            return true;
        }
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        else{
            if(f==r){
                f=-1;
                r=-1;
            }
            else
            {f=(f+1)%size;}
            return true;
        }
    }
    
    int Front() {
        if(!isEmpty()) return q[f];
        else return -1;
    }
    
    int Rear() {
        if(!isEmpty()) return q[r];
        else return -1;
    }
    
    bool isEmpty() {
        if(f==-1 && r==-1) return true;
        else return false;
    }
    
    bool isFull() {
        if((r+1)%size==f) return true;
        else return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */