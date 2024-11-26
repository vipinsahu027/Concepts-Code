#include<bits/stdc++.h>
using namespace std;

void PrintOrder(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    PrintOrder(n-1);
}

int main(){
    int s;
    cin>>s;
    while(s--){
        int n;
        cin>>n;

        cout<<n<<" : ";
        PrintOrder(n);
        cout<<endl;
    }
    return 0;
}