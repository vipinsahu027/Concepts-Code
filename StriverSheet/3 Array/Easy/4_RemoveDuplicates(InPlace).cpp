#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void arrayUnique(vector<int> &arr){
    int i=0;
    for(int j=1; j<arr.size(); j++){
        if(arr[i] != arr[j]){
            arr[++i] = arr[j];
        }
    }
    for(int j=i+1; j<arr.size(); j++){
        arr[j] = -1;
    }
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

        //Array Before
        printArray(arr);
        arrayUnique(arr);

        //Array After
        printArray(arr);
    }

    return 0;
}