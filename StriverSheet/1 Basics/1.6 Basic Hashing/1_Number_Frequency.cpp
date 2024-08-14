#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {10,5,10,15,10,5};
    map<int,int> numberFrequency;

    for(int i=0; i<arr.size(); i++){
        numberFrequency[arr[i]]++;
    }

    for(auto i: numberFrequency){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}