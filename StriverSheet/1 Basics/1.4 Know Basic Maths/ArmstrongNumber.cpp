#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, armstrom = 0;
    cin>>num;
    
    int copy = num;
    while(copy){
        int unit = copy%10;
        armstrom = armstrom + (unit*unit*unit);
        copy = copy/10;
    }

    if (num == armstrom)
        cout<<"Armstrong Number"<<endl;
    else
        cout<<"Non armstrong Number"<<endl;
}