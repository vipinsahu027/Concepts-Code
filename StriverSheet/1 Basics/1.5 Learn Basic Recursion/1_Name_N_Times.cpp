#include<bits/stdc++.h>
using namespace std;

void nameprint(int n){
    if(n==0) return;
    cout<<"Ram Ram Ji"<<endl;
    nameprint(n-1);
}

int main(){
    int n;
    cin >> n;

    nameprint(n);
    return 0;
}