#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void heapSort(int harr[],int size) {
    int n = size;
    while (n > 1)
    {
        swap(harr[1], harr[n]);
        n--;
        heapify(harr, n, 1);
        cout << "Now array" << endl;
        for (int i = 1; i <= size; i++)
        {
            cout << harr[i] << " ";
        }
        cout<<endl;
    }
}
int main()
{
    int harr[8] = {-1, 13, 23, 50, 30, 40, 10, 12};
    int size = 7;

    for (int i = size / 2; i > 0; i--)
    {
        heapify(harr, size, i);
    }

    cout << "Heap array" << endl;
    for (int i = 1; i <= size; i++)
    {
        cout << harr[i] << " ";
    }
    cout<<endl;

    heapSort(harr,size);

    cout << "Sorted array" << endl;
    for (int i = 1; i <= size; i++)
    {
        cout << harr[i] << " ";
    }
    return 0;
}