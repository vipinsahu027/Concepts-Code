#include<bits/stdc++.h>
using namespace std;

void lexico(int n, int i=0){
    if(n<i) return;
    cout<<i<<endl;

    for(int j=(i==0)?1:0; j<=9; j++){
        lexico(n, 10*i + j);
    }
}

int main(){
    int s;
    cin>>s;

    while(s--){
        int n;
        cin>>n;

        lexico(n);
    }

    return 0;
}