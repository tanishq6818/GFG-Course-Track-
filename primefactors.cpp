#include<bits/stdc++.h>
using namespace std;
//TC:O(Square root of N)
bool isPrime(int n){
    if(n==1)    return false;
    if(n==2 || n==3)    return true;
    if(n%2==0 || n%3==0)    return false;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}
int pf1(int n){
    
    for(int i=2;i<=n;i++){
        if(isPrime(i)){ 
            int x=i;
            while((n%x)==0){
                cout<<i<<" ";
                x*=i;           //Multiple powers can also be used
            }
        }
    }
}
int pf2(int n){                     //Optimized Algorithm
    if(n<=1)    return 0;
    for(int i=2;i<n;i++){
        while((n%i)==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>1){
        cout<<n;
    }
}
int pf3(int n){                 //Optimized2 Algorithm
    if(n<=1){
        return 0;
    }
    while((n%2)==0){cout<<2<<" "; n/=2;}
    while((n%3)==0){cout<<3<<" "; n/=3;}
    for(int i=5;i*i<=n;i+=6){
        while(n%i==0){
            cout<<i<<" ";    n/=i;
        }
        while(n%(i+2)==0){
            cout<<i+2<<" ";    n/=(i+2);
        }
    }
    if(n>3) cout<<n;
}