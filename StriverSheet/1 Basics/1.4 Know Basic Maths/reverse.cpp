#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;

    while(q--){
        int num, rev = 0;

        cin>>num;

        while(num){
            rev = (rev * 10) + (num % 10);
            num = num / 10;
        }

        cout<<rev<<endl;
    }
}