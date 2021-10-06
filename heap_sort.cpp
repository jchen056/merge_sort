#include <iostream>
using namespace std;
 
 
// main function to do heap sort
/* A utility function to print array of size n */
void printArray(int arr[], int n){
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i){
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected sub-tree
        cout<<" heapify(A,"<<largest+1<<")"<<endl;
        heapify(arr, n, largest);
    }
}
 


void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--){
        cout<<"heapify(A,"<<i+1<<")"<<endl;
        heapify(arr, n, i);
        printArray(arr,n);
    }
    
    cout<<"After building the heap:"<<endl;
    printArray(arr, n);
    cout<<endl;
    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
        printArray(arr,n);
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
        cout<<"     ";
        printArray(arr,n);
    }
}
 

 
// Driver code
int main()
{
    int arr[] = { 10,5,-1,6,4,2,0,7,5,99,136,554,65,3,-2,5,7,0 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    heapSort(arr, n);
 
    cout << "Sorted array is \n";
    printArray(arr, n);
}