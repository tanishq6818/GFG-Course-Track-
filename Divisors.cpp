#include<bits/stdc++.h>
using namespace std;
int printDivisors(int n){   //TC:O(N),SC:O(1)
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
int printDivisors1(int n){   //TC:O(SQUARE ROOT OF N),SC:O(1)
    for(int i=1;i*i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
                cout<<n/i<<" ";
            }
        }
    }
    return 0;
}
int printDivisors2(int n){   //TC:O(SQUARE ROOT OF N),SC:O(1)
    int i;
    for(i=1;i*i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(;i>=1;i--){
        if(n%i==0)  cout<<n/i<<" ";
    }
    
    return 0;
}
int main(){
    printDivisors2(15);
}