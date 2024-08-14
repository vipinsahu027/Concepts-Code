#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

bool isSorted(int arr[], int first, int last){
    if(last - first == 0){
        return true;
    }
    return arr[first] <= arr[first+1] && isSorted(arr, first+1, last);
}

int* MergeArray(int arr1[], int arr2[], int n, int m){
    int* arr = new int[n+m];

    int i = 0, j = 0, k = 0;

    while( i<n && j<m ){
        if(arr1[i]<arr2[j]) arr[k++] = arr1[i++];
        else arr[k++]=arr2[j++];
    }

    while(i<n) arr[k++] = arr1[i++];
    while(j<m) arr[k++] = arr2[j++];

    return arr;
}

int main(){
    int n, m;
    cin>>n>>m;

    int* arr1 = new int[n];
    int* arr2 = new int[m];
    int* arr3;

    for(int i=0; i<n; i++) cin>>arr1[i];
    for(int i=0; i<m; i++) cin>>arr2[i];

    cout<<"arr1:"<<endl;
    printArray(arr1, n);
    cout<<endl<<"arr2:"<<endl;
    printArray(arr2, m);

    arr3 = MergeArray(arr1, arr2, n, m);

    cout<<endl<<"Is arr3 sorted: "<<isSorted(arr3, 0, n+m-1)<<endl;
    cout<<endl<<"Merged Array:"<<endl;
    printArray(arr3, m+n);

    return 0;
}