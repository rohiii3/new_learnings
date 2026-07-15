#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n;
    cin>>n;
    int A[n];
    for(int j=0;j<n;j++){
        cin>>A[j];
    }
    int counter=0;
    for(int i=0;i<n;i++){
        if(i%2==0 && A[i]%2==0){
            continue;
        }
        else if(i%2==1 && A[i]%2==1){
            continue;
        }
        else if(i%2==0 && A[i]%2==1){
            counter++;
        }
        else if(i%2==1 && A[i]%2==0){
            counter++;
        }
    }
    cout<<counter;
        
}

