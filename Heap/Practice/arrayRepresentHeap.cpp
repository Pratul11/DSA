//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    void heapify(int harr[], int n, int i) {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;
        if(left <= n && harr[largest] < harr[left]){
            largest = left;
        }
        if(right <= n && harr[largest] < harr[right]){
            largest = right;
        }
        if(largest != i) {
            swap(harr[largest],harr[i]);
            heapify(harr,n,largest);
        }
    }
    bool isMaxHeap(int arr[], int n)
    {
        int harr[n];
        harr[0] = -1;
        for(int i=0;i<n;i++){
            harr[i+1] = arr[i];
        }
        for(int i=n/2;i>0;i--) {
            heapify(harr,n,i);
        }
        for(int i=1;i<n+1;i++){
            cout<<harr[i]<<" ";
        }cout<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
        for(int i=0;i<n;i++){
            if(harr[i+1] != arr[i]){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    
    int t = 1;
    // cin >> t;
    while(t--)
    {
       int n = 4;
    //    cin >> n;
       int a[4*n]={9, 5, 3, 8};
    //    for(int i =0;i<n;i++){
    //        cin >> a[i];
    //    }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends