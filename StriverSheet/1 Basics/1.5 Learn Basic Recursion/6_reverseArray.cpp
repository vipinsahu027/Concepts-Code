#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> reverse(vector<int> &arr, int first, int last){
    if(last-first < 1){
        return arr;
    }
    swap(arr[first], arr[last]);
    return reverse(arr,first+1,last-1);
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int in;
        cin>>in;
        arr.push_back(in);
    }

    print(arr);
    reverse(arr, 0, n-1);
    print(arr);
    
    

    return 0;
}