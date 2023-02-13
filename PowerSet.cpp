#include<bits/stdc++.h>
using namespace std;
void printPowerSet(char* str, int n){                 //TC:O(2^n x N)
    int j;
    int power=pow(2,n);
    for(int counter=0;counter<power;counter++){
        for(j=0;j<n;j++){
            if(counter&(1<<j)){
                cout<<str[j];
            }
        }cout<<endl;
    }
}
int main(){
    char set[] = { 'a', 'b', 'c' };
    printPowerSet(set,3);
    
}