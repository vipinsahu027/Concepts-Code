#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void insertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int index = i;
        int val = arr[index];
        while(index>0 && val<arr[index-1]){
            swap(arr[index],arr[index-1]);
            index--;
        }
    }
}

int main(){
    int arr[] = {13,46,24,52,20,9,10,94,65,1};
    printArray(arr,sizeof(arr)/sizeof(int));
    insertionSort(arr,sizeof(arr)/sizeof(int));
    printArray(arr,sizeof(arr)/sizeof(int));
}