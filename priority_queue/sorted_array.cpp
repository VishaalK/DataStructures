#include <iostream>
#include <new>
#include "sorted_array.h"
#include "Utility.h"
using namespace std;

const int INIT_ARR_SIZE = 3;

sorted_array::sorted_array(): elts(new int[INIT_ARR_SIZE]), sz(0), capacity(INIT_ARR_SIZE) {}

sorted_array::~sorted_array() {
    delete[] elts;
    sz = capacity = 0;
}

void sorted_array::push(int val_to_insert) {
    if (sz == 0) {
        elts[0] = val_to_insert;
        sz++;
        return;
    }

    if (sz == capacity) {
        grow_array();
    }
    cout << "sz: " << sz << endl;
    int low = 0;
    int high = sz - 1;
    int mid = low + (high - low)/2;
    while (low <= high) {
        mid = low + (high - low)/2;
        int comp_val = elts[mid];
        if (comp_val < val_to_insert) {
            low = mid + 1;
        } else if (comp_val > val_to_insert) {
            high = mid - 1;
        } else {
            cout << comp_val << " == " << val_to_insert << endl;
            break; //elt found at mid + 1
        }
    } 
    // shift elts right from [mid + 1, end] to make room for new val
    for (int i = sz; i > (high+1); --i) {
        elts[i] = elts[i - 1];
    }
    elts[high + 1] = val_to_insert;
    sz++;
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

void sorted_array::print() {
    for (int i = 0; i < sz; ++i) {
        cout << elts[i] << " ";
    }
    cout << "\n";
}
void sorted_array::grow_array() {
    cout << "howdy doodly" << endl;
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