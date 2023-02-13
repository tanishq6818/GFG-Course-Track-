#include<bits/stdc++.h>
using namespace std;
int gcd1(int a,int b){              //TC:O(LOG(min(a,b)))
    int res=min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}
int gcd2(int a,int b){  //Euclidean Algorithm
    while(a!=b){
        if(a>b) a=a-b;
        else    b=b-a;
    }
    return a;
}
int gcd3(int a,int b){  //Optimized Version of aboved one   
    if(b==0)    return a;
    return (b,a%b);         
}