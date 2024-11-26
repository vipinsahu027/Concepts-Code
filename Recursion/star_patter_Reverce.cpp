/*
Print pattern recursively.
*
**
***
****
*****

*/

#include<bits/stdc++.h>
using namespace std;

void patternStarLoop(int n, int i=0){
    if(n<1) return;

    if(n-i >= n){
        patternStarLoop(n-1, 0);
    }

    if(i<n){
        cout<<"*";
        patternStarLoop(n, i+1);
    }
    else{
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    patternStarLoop(n);

    return 0;
}