#include<bits/stdc++.h>
using namespace std;

long int exponent(int a, int n){
    if(n==0) return 1;
    if(n==1) return a;

    long int temp = exponent(a, n/2);
    if (n%2 == 0) return temp * temp;
    else return temp * temp * a;
}

int main(){
    int s;
    cin>>s;

    while(s--){
        int a, n;
        cin>>a>>n;
        cout<<a<<"^"<<n<<" : "<<exponent(a, n)<<endl;
    }

    return 0;
}