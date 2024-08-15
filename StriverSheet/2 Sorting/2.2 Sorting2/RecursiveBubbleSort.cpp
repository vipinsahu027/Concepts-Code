#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void RecursiveBubbleSort(int arr[], int n){
    if(n==0 || n==1) return;
    int swapR = 0;

    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
            swapR = 1;
        }
    }

    if(swapR == 0) return;
    RecursiveBubbleSort(arr,n-1);
}

int main(){
    int n;
    cin>>n;

    int* arr = new int[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    printArray(arr, n);
    RecursiveBubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}