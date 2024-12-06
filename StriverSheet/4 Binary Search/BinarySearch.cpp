#include<bits/stdc++.h>
using namespace std;

int Func_BinarySearch(int arr[], int i, int j, int num){
    int start = i;
    int end = j;

    while(start <= end){
        int mid = ( start + end )/2;

        if(arr[mid] == num) return mid;

        if(arr[mid] > num) end = mid-1;
        else start = mid+1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    int num;
    cin>>num;

    int index = Func_BinarySearch(arr, 0, n-1, num);
    cout<<endl<<index;

    return 0;
}