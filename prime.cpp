#include<bits/stdc++.h>
using namespace std;
//Note: 1 is neither prime nor composite(not prime)
bool prime1(int n){
    if(n==1)    return false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool prime2(int n){     //Optimized Version
    if(n==1)    return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool prime3(int n){     //Optimized2 Version
    if(n==1)    return false;
    if(n==2 || n==3)    return true;
    if(n%2==0 || n%3==0){
            return false;
    }
    for(int i=5;i*i<=n;i+=6){                   //Next iteration is 11
        if(n%i==0 || n%(i+2)==0){               //For 5 or 7 or 11 or 13
            return false;
        }
    }
    return true;
}

void sieve(int n){                              //Most Optimized
                                                //TC:O(N LOG (LOG N))
    vector<bool> isPrime(n+1,true);
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<endl;
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }
}