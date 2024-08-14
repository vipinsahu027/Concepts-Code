#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void mergeArray(int arr1[], int arr2[], int arr[], int n, int m){
    int i,j,k;
    i = j = k = 0;

    while(i<n && j<m){
        if(arr1[i]<=arr2[j])arr[k++] = arr1[i++];
        else arr[k++] = arr2[j++];
    }
    while (i < n) arr[k++] = arr1[i++]; 
    while (j < m) arr[k++] = arr2[j++];
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5, 5, 6};
    int arr2[] = {2, 4, 6, 8};
    int k = sizeof(arr1)/sizeof(int) + sizeof(arr2)/sizeof(int);
    int arr3[k];

    printArray(arr1,sizeof(arr1)/sizeof(int));
    printArray(arr2,sizeof(arr2)/sizeof(int));
    mergeArray(arr1, arr2, arr3, sizeof(arr1)/sizeof(int),sizeof(arr2)/sizeof(int));
    printArray(arr3,k);
}
    