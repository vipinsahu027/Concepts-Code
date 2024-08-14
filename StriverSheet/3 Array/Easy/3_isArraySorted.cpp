#include<bits/stdc++.h>
using namespace std;

// Recursive Solution
bool isSorted(int arr[], int i, int n){
    if(n-i == 1) return true;
    return arr[i] <= arr[i+1] && isSorted(arr, i+1, n);
}

// Iterative Solution
bool isSorted_I(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    int* arr = new int[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    
    cout<<"Recursive: "<<endl;
    if(isSorted(arr, 0, n)) cout<<"Sorted"<<endl;
    else cout<<"Not Sorted"<<endl;
    
    cout<<endl<<"Iterative: "<<endl;
    if(isSorted_I(arr, n)) cout<<"Sorted"<<endl;
    else cout<<"Not Sorted"<<endl;

    return 0;
}