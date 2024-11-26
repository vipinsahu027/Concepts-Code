/*
Given n print all binary string with non contiguous 1
*/

#include<bits/stdc++.h>
using namespace std;

long int func(int n){
    if(n<1) return 0;
    if(n==1) return 2;
    if(n==2) return 3;
    return func(n-1)+func(n-2);
}

int main(){
    int s;
    cin>>s;

    while(s--){
        int n;
        cin>>n;
        cout<<n<<" : "<<func(n);
        cout<<endl;
    }
    return 0;
}