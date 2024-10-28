#include<iostream>
#include<vector>
using namespace std;

int minions(int n,int k,vector<int>&arr){
    int count=0;
    for(int value:arr){
        int newvalue=value+k;
        if(newvalue%7==0){
            count++;
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<minions(n,k,arr)<<endl;
    }
    return 0;
}

