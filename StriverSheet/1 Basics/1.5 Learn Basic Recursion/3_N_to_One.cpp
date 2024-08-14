#include<bits/stdc++.h>
using namespace std;

void nameprint(int n){
    if(n==1){
        cout<<"Ram Ram Ji - "<<n;
        return;
    }
    cout<<"Ram Ram Ji - "<<n<<endl;
    nameprint(n-1);
} 

int main(){
    int n;
    cin >> n;

    nameprint(n);
    return 0;
}