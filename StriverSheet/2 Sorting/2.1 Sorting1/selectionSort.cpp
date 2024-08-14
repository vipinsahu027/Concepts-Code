#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i; j<n; j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

int main(){
    int arr[] = {13,46,24,52,20,9,10,94,65,1};
    printArray(arr,sizeof(arr)/sizeof(int));
    selectionSort(arr,sizeof(arr)/sizeof(int));
    printArray(arr,sizeof(arr)/sizeof(int));
}