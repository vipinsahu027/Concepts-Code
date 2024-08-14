#include<bits/stdc++.h>
using namespace std;

long factorial(int num){
    if(num == 0) return 1;
    return num*factorial(num-1);
}

int main(){
    int num;
    cin>>num;

    cout<<factorial(num);

    return 0;
}