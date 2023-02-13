#include<bits/stdc++.h>
using namespace std;
int countDigits(int x){     //TC:O(N)
    int c=0;
    if(x==0){
        return 1;
    }
    while(x>0){
        c++;
        x/=10;
    }
    return c;
}
int main(){
    cout<<countDigits(5430);
}