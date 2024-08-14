#include<bits/stdc++.h>
using namespace std;

int rev(int num){
    int rev=0;
    
    while(num){
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }

    return rev;
}

int main(){
    int q;
    cin>>q;

    while(q--){
        int num;
        cin>>num;

        int rev_num = rev(num);
        if (num == rev_num)
            cout<<"Palendrom"<<endl;
        else
            cout<<"Not Palendrom"<<endl;
        
    }
}