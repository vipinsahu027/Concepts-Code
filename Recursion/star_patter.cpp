/*
Print pattern recursively.
*****
****
***
**
*

*/

#include<bits/stdc++.h>
using namespace std;


// void patternStarLoop(int n){
//     if(n<1) return;

//     for(int i=0; i<n; i++) cout<<"*";
//     cout<<endl;

//     patternStarLoop(n-1);
// }

void patternStar(int n, int i){
    if(n<1) return;

    if(i<n){
        cout<<"*";
        patternStar(n, i+1);
    }
    else{
        cout<<endl;
        patternStar(n-1, 0);
    }
}

int main(){
    int n;
    cin>>n;

    //patternStarLoop(n);
    patternStar(n, 0);

    return 0;
}
