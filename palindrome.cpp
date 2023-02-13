#include<bits/stdc++.h>
using namespace std;
bool palindrome(int x){ //TC:O(N)
    int temp=x;
    int ans=0;
    while(x>0){
        int rem=x%10;
        ans=ans*10+rem;
        x=x/10;
    }
    return (temp==ans);
}
int main(){
    cout<<palindrome(756567);
}