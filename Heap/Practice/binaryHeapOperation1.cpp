#include<bits/stdc++.h>
using namespace std;

struct MinHeap
{
    int *harr;
    int capacity, heap_size;
    MinHeap(int cap) {heap_size = 0; capacity = cap; harr = new int[cap];}
    int extractMin();
    void deleteKey(int i);
    void insertKey(int k);
    // void MinHeapify(int i);
    // void decreaseKey(int i,int val);
    // int parent(int i);
    // int left(int i);
    // int right(int i);
};

int MinHeap::extractMin() 
{
   if(heap_size == 0) {
        return -1;
    }
    int smallest = harr[1];
    int index;
    for(int i=1;i<heap_size;i++) {
        if(harr[i] < smallest){
            smallest = harr[i];
            index = i;
        }
    }
    harr[index] = harr[heap_size];
    heap_size--;
    while(index < heap_size) {
        int left = 2 * index;
        int right = 2 * index + 1;
        if(left <= heap_size && harr[left] < harr[index]){
            swap(harr[left],harr[index]);
            index = left;
        }
        else if(right <= heap_size && harr[right] < harr[index]){
            swap(harr[right],harr[index]);
            index = right;
        }else {
            return smallest;
        }
    }
    return smallest;
}

void MinHeap::deleteKey(int index)
{
    index += 1;
    if(index > heap_size) {
        return;
    }
    harr[index] = harr[heap_size];
    heap_size--;
    while(index < heap_size) {
        int left = 2 * index;
        int right = 2 * index + 1;
        if(left <= heap_size && harr[left] < harr[index]){
            swap(harr[left],harr[index]);
            index = left;
        }
        else if(right <= heap_size && harr[right] < harr[index]){
            swap(harr[right],harr[index]);
            index = right;
        }else {
            return;
        }
    }
}

void MinHeap::insertKey(int k) 
{
    heap_size++;
    int index = heap_size;
    harr[index] = k;
    while(index > 1) {
        int parent = index / 2;
        if(harr[parent] > harr[index]){
            swap(harr[parent], harr[index]);
            index = parent;
        }
        else {
            return;
        }
    }
    
}
// void MinHeap::decreaseKey(int i, int new_val) 
// {
//     harr[i] = new_val;
//     while (i != 0 && harr[parent(i)] > harr[i]) {
//         swap(harr[i], harr[parent(i)]);
//         i = parent(i);
//     }
// }

// void MinHeap::MinHeapify(int i) 
// {
//     int l = left(i);
//     int r = right(i);
//     int smallest = i;
//     if (l < heap_size && harr[l] < harr[i]) smallest = l;
//     if (r < heap_size && harr[r] < harr[smallest]) smallest = r;
//     if (smallest != i) {
//         swap(harr[i], harr[smallest]);
//         MinHeapify(smallest);
//     }
// }

int main()
{
    MinHeap m(7);
    cout<<m.extractMin()<<" ";
    m.insertKey(33);
    cout<<m.extractMin()<<" ";
    m.deleteKey(79);
    cout<<m.extractMin()<<" ";
    cout<<m.extractMin()<<" ";
    cout<<m.extractMin()<<" ";
    cout<<m.extractMin()<<" ";
    cout<<m.extractMin()<<" ";
    cout<<m.extractMin()<<" ";
    m.insertKey(30);
    return 0;
}

// 3 1 33 3 2 79 3 3 3 3 3 3 1 30