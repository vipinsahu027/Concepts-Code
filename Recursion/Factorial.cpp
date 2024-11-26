#include<bits/stdc++.h>
using namespace std;

long int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
} 

int main(){
    int s;
    cin>>s;
    while(s--){
        int n;
        cin>>n;

        long int factorials = factorial(n);
        cout<<n<<"! : "<<factorials<<endl;
    }
    return 0;
}