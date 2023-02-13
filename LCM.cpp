#include<bits/stdc++.h>
using namespace std;
int lcm1(int a,int b){                //TC:O(LOG(max(a,b)))
    int res=max(a,b);
    while(true){
        if(res%a==0 && res%b==0){
            break;
        }
        res++;
    }
    return res;
}
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int lcm2(int a,int b){              //Formula: A*B=gcd*lcm;
    return (a*b)/gcd(a,b);
}