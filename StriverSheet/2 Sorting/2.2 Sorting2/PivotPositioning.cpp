#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int partition(int arr[], int low, int high){
    int i = 0;
    int pivot = high;

    for(int j=low; j<high; j++){
        if(arr[j]<=arr[pivot]){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[pivot]);
    return i;
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    printArray(arr, n);

    int iPivot = partition(arr,0,n-1);
    cout<<iPivot<<endl;
    printArray(arr, n);
    
    return 0;
}