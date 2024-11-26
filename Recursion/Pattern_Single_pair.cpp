/*
There are N persons who want to go to a party.
Constraint: Person can go either single or in pair.
Numbers of ways N persons can go to party
*/

#include<bits/stdc++.h>
using namespace std;

int Pattern_Single_pair(int n){
    if (n==1 || n==2) return n;
    return Pattern_Single_pair(n-1) + (n-1)*Pattern_Single_pair(n-2);
}

int main(){
    int s;
    cin>>s;
    //s = 1;
    while(s--){
        int n;
        cin>>n;
        //n=4;
        cout<<n<<" : "<<Pattern_Single_pair(n)<<endl;
    }

    return 0;
}