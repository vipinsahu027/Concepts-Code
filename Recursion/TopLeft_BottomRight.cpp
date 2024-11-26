#include<bits/stdc++.h>
using namespace std;

void Path(int m, int n, int i, int j, string osf){
    if(i >= m || j >= n) return;

    if(i == m-1 && j == n-1){
        cout<<osf<<endl;
        return;
    }

    Path(m, n, i, j+1, osf+"R ");
    Path(m, n, i+1, j, osf+"D ");
}

int main(){
    int s;
    cin>>s;
    while(s--){
        int m, n;
        cin>>m>>n;
        
        Path(m, n, 0, 0, "");
    }
    return 0;
}