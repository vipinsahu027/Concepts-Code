#include<bits/stdc++.h>
using namespace std;

void nameprint(int n){
    if (n == 1){
        cout<<"Ram Ram Ji - "<<n<<endl;
        return;
    }
    nameprint(n-1);
    cout<<"Ram Ram Ji - "<<n<<endl;
}

int main(){
    int n;
    cin >> n;

    nameprint(n);
    return 0;
}