#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int arrayUnique(vector<int> &arr){
    int i=0;
    for(int j=1; j<arr.size(); j++){
        if(arr[i] != arr[j]){
            arr[++i] = arr[j];
        }
    }
    return i+1;
}

int main(){
    int test;
    cin>>test;
    cin.ignore();

    while(test--){
        string input;
        int num;
        vector<int> arr;
        
        getline(cin, input);
        stringstream s2(input);
        
        while (s2 >> num) {
            arr.push_back(num);
        }

        printArray(arr, arr.size());
        int k = arrayUnique(arr);
        printArray(arr,k);
    }

    return 0;
}