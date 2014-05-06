#include "sorted_array.h"
#include "Utility.h"
#include <new>
using namespace std;

const int INIT_ARR_SIZE = 3;

sorted_array::sorted_array(): elts(new int[INIT_ARR_SIZE]), sz(0), capacity(INIT_ARR_SIZE) {}

sorted_array::~sorted_array() {
    delete[] elts;
    sz = capacity = 0;
}

void sorted_array::push(int) {
    if (sz == capacity) {
        grow_array();
    }
    // TODO binary search and insert into correct location
    return;
}

int sorted_array::top() {
    if (!sz) {
        throw Error("top() called on empty priority queue");
    }
    return elts[0];
}

void sorted_array::pop() {
    if (!sz) {
        return;
    }
    for (int i = 0; i < (sz - 1); ++i) {
        elts[i] = elts[i + 1];
    }
}

int sorted_array::size() {
    return sz;
}

void sorted_array::clear() {
    delete[] elts;
    elts = new int[INIT_ARR_SIZE];
    sz = 0;
    capacity = INIT_ARR_SIZE;
}

void sorted_array::grow_array() {
    int new_capacity = 2*capacity + 1;
    int* new_arr = new int[new_capacity];
    for (int i = 0; i < sz; ++i) {
        new_arr[i] = elts[i];
    }
    delete elts;
    capacity = new_capacity;
    elts = new_arr;
    return;
}