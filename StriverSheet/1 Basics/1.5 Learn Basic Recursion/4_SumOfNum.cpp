#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(int num){
    if(num == 1){
        return 1;
    }
    return num + sumOfDigit(num-1);
}

int main(){
    int num;
    cin>>num;

    cout<<sumOfDigit(num);

    return 0;
}