#include<bits/stdc++.h>
using namespace std;

int Func_Recursive_BinarySearch(int arr[], int i, int j, int num){
    if(i>j) return -1;
    
    int mid = (i+j)/2;
    if(arr[mid] == num) return mid;

    if (arr[mid] > num) {
        return Func_Recursive_BinarySearch(arr, 0, mid-1, num);
    }
    
    return Func_Recursive_BinarySearch(arr, mid+1, j, num);

}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    int num;
    cin>>num;

    int index = Func_Recursive_BinarySearch(arr, 0, n-1, num);
    cout<<endl<<index;

    return 0;
}