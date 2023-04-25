class MyCircularDeque {
public:
    int f=-1,r=-1;
    int size;
    int q[100000];
    MyCircularDeque(int k) {
        size=k;
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;
        if(f==-1){
            f=0;
            r=0;
        }
        else if(f==0){
            f=size-1;
        }
        else{
            f=(f-1)%size;
        }
            q[f]=value;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;
            if(f==-1) {f=0;
            r=0;}
            else
            r=(r+1)%size;
            q[r]=value;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        if(r==f){
            r=-1;
            f=-1;
            
        }else  f=(f+1)%size;
    return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        else if(r==f){
            r=-1;
            f=-1;
        }
        else if(r==0){
            r=size-1;
            // cout<<r;
        }
        else r=(r-1)%size;
        cout<<size<<" ";

        return true;
    }
    
    int getFront() {
        if(isEmpty()) return -1;
        else return q[f];
    }
    
    int getRear() {
        if(isEmpty()) return -1;
        // cout<<r<<" ";
        else return q[r];
        // return 0;
    }
    
    bool isEmpty() {
        if(f==-1 && r==-1){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if((r+1)%size==f){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */