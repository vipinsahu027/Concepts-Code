#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void RecursiveInsertionSort(int arr[], int i, int n){
    if(i==n) return;
    
    int value = arr[i];
    int void_space = i;
    
    while(void_space>0 && value<arr[void_space-1]){
        arr[void_space] = arr[void_space-1];
        void_space--;
    }
    arr[void_space] = value;
    RecursiveInsertionSort(arr, i+1, n);
}

int main(){
    int n;
    cin>>n;

    int* arr = new int[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    printArray(arr, n);
    RecursiveInsertionSort(arr, 0, n);
    printArray(arr, n);

    return 0;
}