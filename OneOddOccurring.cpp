#include<bits/stdc++.h>
using namespace std;
int naive(int arr[],int n){     //O(Square of N)
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count%2!=0){
            cout<<arr[i]<<" ";
        }
    }
}
int ooo(int arr[],int n){       //TC:O(N)
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
//#Question2-(Missing Element)      //TC:O(N)
int miss2(int arr[],int n){
    int ans1=1;
    int ans2=arr[0];
    for(int i=2;i<=n+1;i++){
        ans1^=i;
    }
    for(int i=1;i<n;i++){
        ans2^=arr[i];
    }
    return ans1^ans2;
}