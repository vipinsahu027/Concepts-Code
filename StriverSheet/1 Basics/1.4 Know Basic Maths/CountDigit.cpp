#include<bits/stdc++.h>
using namespace std;

int Optimal(int n){
    return log10(n) + 1;
}

int BruteForce(int n){
    int num = n, count=0;
    while(num){
        count++;
        num = num / 10;
    }
    return count;
}

int main(){
    int q;
    cin>>q;

    while(q--){
        int num, count;
        cin>>num;

        cout<<num<<" : "<<BruteForce(num)<<" "<<Optimal(num)<<endl;
    }
}