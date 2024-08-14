#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<= n-i-1; j++){ cout<<"  "; }
        for(int j=0; j<2*i - 1; j++){ cout<<"* "; }
        for(int j=0; j<= n-i-1; j++){ cout<<"  "; }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){ cout<<"  ";}
        for(int j=0; j<2*(n-i)-1; j++){ cout<<"* "; }
        for(int j=0; j<i; j++){ cout<<"  ";}
        cout<<endl;
    }
}

void pattern9(int n){ 
    pattern7(n); 
    pattern8(n);
}

void pattern10(int n){
    for(int i=1; i<=2*n-1; i++){
        int star = i;
        if(i>n) { star = 2*n - i;}
        for(int j=1; j<=star; j++){ cout<<"* "; }
        cout<<endl;
    }
}

void pattern11(int n){
    for(int i=0; i<n; i++){
        int flag;
        if (i%2==0){ flag = 1; } else { flag = 0; }

        for(int j=0; j<=i; j++){
            cout<<flag<<" ";
            if (flag == 1) {flag = 0;} else {flag = 1;}
        }
        cout<<endl;
    }
}

void pattern12(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){ cout<<j; }
        for(int j=1; j<=2*n - 2*i; j++){ cout<<" "; }
        for(int j=i; j>=1; j--){ cout<<j; }
        cout<<endl;
    }
}

void pattern13(int n){
    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){ cout<<num++<<" "; }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++) { cout<< char((int)'A'+j)<<" "; }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++) { cout<< char((int)'A'+j)<<" "; }
        cout<<endl;
    }
}

void pattern16(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++) { cout<<char((int)'A'+i)<<" ";}
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++) cout<<"  ";

        int num = 0;
        int breakpoint = 2*i / 2;
        for(int j=0; j<2*i+1; j++){
            cout<<char((int)'A'+num)<<" ";
            if(j<breakpoint) num++;
            else num--;
        }
        //for(int j=0; j<n-1-i; j++) cout<<" ";
        cout<<endl;
    }
}

void pattern18(int n){
    for(int i=0; i<n; i++){
        for(int j=n-1-i; j<n; j++){ cout<< char((int)'A'+ j)<<" "; }
        cout<<endl;
    }
}

void pattern19(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++) cout<<"*";
        for(int j=0; j<2*i; j++) cout<<" ";
        for(int j=0; j<n-i; j++) cout<<"*";
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++) cout<<"*";
        for(int j=0; j<2*(n-1-i); j++) cout<<" ";
        for(int j=0; j<=i; j++) cout<<"*";
        cout<<endl;
    }
}

void pattern20(int n){
    for(int i=1; i<2*n; i++){
        int star = i;
        if (i>n) { star = 2*n - i; }

        for(int j=1; j<=star; j++) cout<<"*";
        for(int j=1; j<=2*(n - star); j++) cout<<" ";
        for(int j=1; j<=star; j++) cout<<"*";
        cout<<endl;
    }
}

void pattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (i==0||i==n-1||j==0||j==n-1){ cout<<"*"; }
            else{ cout<<" "; }
        }
        cout<<endl;
    }
}

void pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++) {
            int top = i;
            int left = j;
            int right = (2*n-1)-1-j;
            int down = (2*n-1)-1-i;
            cout<<n - min(min(top, left),min(right,down));
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    
    cout<<"pattern1\n";pattern1(n);
    cout<<endl<<"pattern2\n";pattern2(n);
    cout<<endl<<"pattern3\n";pattern3(n);
    cout<<endl<<"pattern4\n";pattern4(n);
    cout<<endl<<"pattern5\n";pattern5(n);
    cout<<endl<<"pattern6\n";pattern6(n);
    cout<<endl<<"pattern7\n";pattern7(n);
    cout<<endl<<"pattern8\n";pattern8(n);
    cout<<endl<<"pattern9\n";pattern9(n);
    cout<<endl<<"pattern10\n";pattern10(n);
    cout<<endl<<"pattern11\n";pattern11(n);
    cout<<endl<<"pattern12\n";pattern12(n);
    cout<<endl<<"pattern13\n";pattern13(n);
    cout<<endl<<"pattern14\n";pattern14(n);
    cout<<endl<<"pattern15\n";pattern15(n);
    cout<<endl<<"pattern16\n";pattern16(n);
    cout<<endl<<"pattern17\n";pattern17(n);
    cout<<endl<<"pattern18\n";pattern18(n);
    cout<<endl<<"pattern19\n";pattern19(n);
    cout<<endl<<"pattern20\n";pattern20(n);
    cout<<endl<<"pattern21\n";pattern21(n);
    cout<<endl<<"pattern22\n";pattern22(n);

    return 0;
}