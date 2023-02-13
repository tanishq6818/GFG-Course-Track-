#include<bits/stdc++.h>
using namespace std;
//Look-Up Table Method for 32-Bit
int table[256];                     //TC:O(1)
void initialize(){
    table[0]=0;
    for(int i=1;i<256;i++){
        table[i]=(i&1)+table[i/2];
    }
}
int count(int n){
    int res;
    res=table[n & 0xff];     //8 Bit
    n>>=8;
    res+=table[n & 0xff];    //16 Bit
    n>>=8;
    res+=table[n & 0xff];    //24 Bit
    n>>=8;
    res+=table[n & 0xff];    //32 Bit
    n>>=8;
}
//Normal Method
void countBits(int n){
    int ans=0;
    while(n>0){
        if(n&1==1){
            ans++;
        }
        n>>=1;
    }cout<<ans;
}
void countBits2(int n){
    int ans=0;
    while(n>0){
        if(n%2!=0){
            ans++;
        }
        n/=2;
    }cout<<ans;
}
void countBits3(int n){
    int ans=0;
    while(n>0){
        ans+=(n&1);
        n>>=1;
    }cout<<ans;
}

//Brian-Kerningam Method
void countBits4(int n){
    int ans=0;
    while(n>0){             //RUNNING LOOP ACCORDING TO THE SET BITS
        n=n&(n-1);
        ans++;
    }
    cout<<ans;
}