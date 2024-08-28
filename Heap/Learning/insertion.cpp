#include<bits/stdc++.h>
using namespace std;

class heap {
    public:
    int arr[100];
    int size;
    heap() {
        size = 0;
        arr[0] = -1;
    }
    void insert(int val) {
        size++;
        int index = size;
        arr[index] = val;
        while(index > 1) {
            int parent = index/2;
            if(arr[parent] < arr[index]) {
                swap(arr[index],arr[parent]);
                index = parent;
            }
            else {
                return;
            }
        }
    }
    void print() {
        for(int i = 1;i<=size;i++) {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void deletion() {
        if(size == 0) {
            cout<<"Empty heap";
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while(i<size) {
            int leftElement = 2 * i;
            int rightElement = 2 * i + 1;
            if(leftElement < size && arr[i] < arr[leftElement]) {
                swap(arr[i],arr[leftElement]);
                i = leftElement;
            }
            else if(rightElement < size && arr[i] < arr[rightElement]) {
                swap(arr[i],arr[rightElement]);
                i = rightElement;
            }else {
                return;
            }
        }
    }
};

int main()
{
    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(40);
    h.insert(30);
    h.insert(12);
    h.insert(32);
    h.insert(35); 
    h.print();
    h.deletion();
    h.print();
    h.deletion();
    h.print();
    return 0;
}