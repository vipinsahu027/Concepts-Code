#include<bits/stdc++.h>
using namespace std;

long fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){

    for(int i=0; i<=10; i++){
        cout<<fibonacci(i)<<endl;
    }
}
