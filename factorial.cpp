#include<bits/stdc++.h>
using namespace std;
int fact(int x){    //TC:O(N)
    if(x==0){
        return 1;
    }
    return x*fact(x-1);
}
int fact1(int x){   //TC:O(N)+O(1)
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int trailingzeros(int x){
    int f=fact(x);
    int c=0;
    while(f>0){
        if(f%10==0){
            c++;
        }
        f/=10;
    }
    return c;
}
int trailingzeros2(int x){  //TC:O(LogN)
    int ans=0;
    for(int i=5;i<=x;i=i*5){
        ans+=x/i;
    }
    return ans;
}
int main(){
    cout<<fact(5)<<endl;
    cout<<fact1(5)<<endl;
    cout<<trailingzeros(5);
}