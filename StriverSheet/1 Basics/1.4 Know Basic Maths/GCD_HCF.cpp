#include<bits/stdc++.h>
using namespace std;

int bruteForce(int a, int b){
    int min_num = min(a, b);
    int hcf = 1;

    for(int i=1; i<=min_num; i++){
        if(a % i == 0 && b % i == 0){ hcf = i; }
    }
    return hcf;
}

int better(int a, int b){
    int min_num = min(a, b);
    int hcf = 1;
    for(int i=min_num; i>0; i--){
        if(a % i == 0 && b % i == 0){ 
            return i;
        }
    }
    return hcf;
}

int optimal(int a, int b){
    while (a>0 && b>0){
        if(a>b){ a=a%b; }
        else{ b=b%a; }
    }
    if(a==0){ return b ;}
    return a;
}


int main(){
    int num1, num2;
    cin>>num1>>num2;

    //int hcf1 = bruteForce(num1, num2); cout<<hcf1<<endl;
    //int hcf2 = better(num1, num2); cout<<hcf2<<endl;
    int hcf3 = optimal(num1, num2); cout<<hcf3<<endl;
    

}