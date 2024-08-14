#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    vector<bool> prime(num,true);
    prime[0] = prime[1] = false;

    for(int i=2; i<num; i++){
        for(int j=i*i; j<num; j+=i){
            prime[j] = false;
        }
    }
    
    for(int i=0; i<num; i++){
        if(prime[i]) cout<<i<<endl;
    }
}