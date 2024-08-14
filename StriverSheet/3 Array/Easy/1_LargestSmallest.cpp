#include<bits/stdc++.h>
using namespace std;

int Smallest(int arr[], int n){
    if(n==0 || n==1) return -1;

    int smallest = arr[0];
    for(int i=1; i<n; i++) {
        if(smallest>arr[i]) smallest = arr[i];
    }
    return smallest;
}

int Largest(int arr[], int n){
    if(n==0 || n==1) return -1;

    int largest = arr[0];
    for(int i=1; i<n; i++) {
        if(largest<arr[i]) largest = arr[i];
    }
    return largest;
}

pair<int, int> LargestSmallest(int arr[], int n){
    if(n==0 || n==1) return make_pair(-1,-1);
    
    int smallest, largest;
    smallest = largest = arr[0];

    for(int i=1; i<n; i++){
        if(smallest>arr[i]) smallest = arr[i];
        if(largest<arr[i]) largest = arr[i];
    }
    return make_pair(smallest, largest);
}

int main() {
    int n;
    cin>>n;
    int* arr = new int[n];
    
    for(int i=0; i<n; i++) cin>>arr[i];

    int smallest = Smallest(arr, n);
    cout<<"Smallest : "<<smallest<<endl;

    int largest = Largest(arr, n);
    cout<<"Largest : "<<largest<<endl;

    pair<int, int> Elements = LargestSmallest(arr, n);
    cout<<"Smallest : "<<smallest<<endl<<"Largest : "<<largest<<endl;

    return 0;
}