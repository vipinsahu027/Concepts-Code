#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }   
}

int main(){
    int arr[] = {13,46,24,52,20,9,10,94,65,1};
    printArray(arr,sizeof(arr)/sizeof(int));
    bubbleSort(arr,sizeof(arr)/sizeof(int));
    printArray(arr,sizeof(arr)/sizeof(int));
}