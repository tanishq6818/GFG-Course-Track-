#include<bits/stdc++.h>
using namespace std;
bool ispowerofTwo(int n){
    if(n==0)    return false;
    while(n!=1){
        if(n%2!=0)  return false;
        n/=2;
    }
    return true;
}
bool ispowerofTwo2(int n){
    // if(n==0)    return false;
    return (n!=0)&&(n&(n-1)==0);
}