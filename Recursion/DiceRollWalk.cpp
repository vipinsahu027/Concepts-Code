#include<bits/stdc++.h>
using namespace std;

int path(int n, int i, string osf){
    if(i >= n) return 0;
    if(i == n-1) {
        cout<<osf<<endl;
        return 1;
    }

    int pathNumber = 0;

    for(int j=1; j<=6; j++){
        pathNumber = pathNumber + path(n, i+j, osf+" -> "+to_string(i+j));
    }
    return pathNumber;
}

int main(){
    int s;
    cin>>s;
    while(s--){
        int n;
        cin>>n;
        cout<<"Array Size n: "<<n<<endl;
        int numberOfPath = path(n, 0, "0");
        cout<<"Number of paths: "<<numberOfPath<<endl<<endl;
    }
    return 0;
}