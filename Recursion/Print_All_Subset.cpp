#include<bits/stdc++.h>
using namespace std;

void subset(int arr[], int i, int size, string sub){
    if(i==size){
        cout<<"[ "<<sub<<" ]"<<endl;
        return;
    }

    subset(arr, i+1, size, sub);
    subset(arr, i+1, size, sub + to_string(arr[i]) + " ");
}

int main(){
    int s;
    cin>>s;
    while(s--){
        int size;
        cin>>size;

        int *arr = new int[size];

        for(int i=0; i<size; i++) cin>>arr[i];

        subset(arr, 0, size, "");

        delete[] arr;
    }
    return 0;
}