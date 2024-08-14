#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int num, int n){
    for(int i=0; i<n; i++){
        if(num == arr[i]) return i;
    }
    return -1;
}

int main(){
    int n, num;
    cin>>n;
    cin>>num;
    
    int* arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int index = linearSearch(arr, num, n);
    
    if(index == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Elements for on index "<<index<<endl;
    }

    return 0;
}