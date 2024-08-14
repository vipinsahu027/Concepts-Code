#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void mergeArray(int arr[], int low, int mid, int high){
    int i = low;
    int j = mid+1;
    vector<int> arrCopy;

    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]) arrCopy.push_back(arr[i++]);
        else arrCopy.push_back(arr[j++]);
    }

    while (i<=mid) arrCopy.push_back(arr[i++]); 
    while (j<=high) arrCopy.push_back(arr[j++]);

    for(int i=low; i<=high; i++) arr[i] = arrCopy[i-low];    
}

void mergeSort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    mergeArray(arr, low, mid, high);
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    printArray(arr, n);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}
