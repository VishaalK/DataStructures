#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

class priority_queue {
public:
    virtual ~priority_queue() {};
    
    virtual void push(int) = 0;
    
    virtual int top() = 0;
    
    virtual void pop() = 0;
    
    virtual int size() = 0;
    
    virtual void clear() = 0;
};

#endif