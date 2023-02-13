#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){             //TC:O(N)
    int ans=1;
    for(int i=0;i<b;i++){
        ans*=a;
    }
    return ans;
}
int power2(int a,int n){            //Optimal Solution TC:O(Log N), SC:O(N)
    if(n==0){
        return 1;
    }
    int temp=power(a,n/2);
    temp*=temp;
    if(n%2==0){
        return temp;
    }
    else{
        return temp*a;
    }
}
int pow3(int x,int n){              //Optimal Solution TC:O(Log N), SC:O(1)
    int ans=1;
    while(n>0){
        if(n&1) ans*=x;
        x*=x;
        n>>=1;
    }
    return ans;
}
int main(){
    cout<<power(2,3);
}