#include<bits/stdc++.h>
using namespace std;
int fibona2(int n){
    int fib[n+2];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[n];
}
int fibona(int n)
{
    if (n <= 1)
        return n;
    return fibona(n-1) + fibona(n-2);
}