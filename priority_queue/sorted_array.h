#ifndef SORTED_ARRAY_H
#define SORTED_ARRAY_H
#include "priority_queue.h"

class sorted_array: public priority_queue {
public:
    sorted_array();
    
    ~sorted_array() override;
    
    void push(int) override;
    
    int top() override;
    
    void pop() override;
    
    int size() override;
   
    bool isEmpty() override;

    void clear() override;

//  void print();
    
private:
    int* elts;
    int sz;
    int capacity;
    
    void grow_array();
};

#endif
