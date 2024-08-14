#include<bits/stdc++.h>
using namespace std;

bool palendrom(string &rev, int start, int last){
    if(last-start < 1){
        return true;
    }

    return rev[start] == rev[last] && palendrom(rev,start+1,last-1);
}

int main(){
    string s;
    cin>>s;
    
    if(palendrom(s,0,s.size()-1)){
        cout<<"P";
    }
    else{
        cout<<"np";
    }

    return 0;
}