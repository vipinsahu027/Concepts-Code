#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int partition(int arr[], int low, int high){
    int i = low;
    int pIndex = high;

    for(int j=low; j<high; j++){
        if(arr[j]<=arr[pIndex]){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[pIndex]);
    return i;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int Ipartition = partition(arr, low, high);
        quickSort(arr, low, Ipartition-1);
        quickSort(arr, Ipartition+1, high);
    }
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    
    return 0;
}