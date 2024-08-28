#include<bits/stdc++.h>
using namespace std;
class Minheap {
    public:
    int size;
    int harr[100];
    Minheap() {
        harr[0] = -1;
        size = 0;
    }
    void insertion(int val) {
        size++;
        int index = size;
        harr[index] = val;
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
    void print() {
        for(int i=1;i<=size;i++) {
            cout<<harr[i]<<" ";
        }cout<<endl;
    }
    void deleteKey(int index) {
        index += 1;
        if(index > size) {
            cout<<"Delete Element: -1"<<endl;
            return;
        }
        cout<<"Delete Element: "<<harr[index]<<endl;
        harr[index] = harr[size];
        size--;
        while(index < size) {
            int left = 2 * index;
            int right = 2 * index + 1;
            if(left < size && harr[left] < harr[index]){
                swap(harr[left],harr[index]);
                index = left;
            }
            else if(right < size && harr[right] < harr[index]){
                swap(harr[right],harr[index]);
                index = right;
            }else {
                return;
            }
        }
    }
    void extractMin() {
        if(size == 0) {
            cout<<"Extract Element: -1"<<endl;
            return;
        }
        int smallest = harr[1];
        int index;
        for(int i=1;i<size;i++) {
            if(harr[i] < smallest){
                smallest = harr[i];
                index = i;
            }
        }
        cout<<"Extract Element: "<<smallest<<endl;
        harr[index] = harr[size];
        size--;
        while(index < size) {
            int left = 2 * index;
            int right = 2 * index + 1;
            if(left < size && harr[left] < harr[index]){
                swap(harr[left],harr[index]);
                index = left;
            }
            else if(right < size && harr[right] < harr[index]){
                swap(harr[right],harr[index]);
                index = right;
            }else {
                return;
            }
        }
    }
};

int main()
{
    Minheap h;
    h.insertion(8);
    h.insertion(9);
    h.deleteKey(1);
    h.extractMin();
    // h.insertion(6);
    // h.extractMin();
    h.extractMin();
    // h.print();
    // h.print();
    // h.print();
    return 0;
}