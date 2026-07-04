#include<iostream>
#include<vector>
using namespace std;
long long  maxpair(vector <int>& nums){
    int max1,max2= 0;
    int n=nums.size();
    for(int i=0; i<n;i++){
        if(nums[i]>max1){
            max1=nums[i];

        }
    }
    for(int j=0;j<n;j++){
        if(nums[j]!=max1 && nums[j]>max2){
            max2=nums[j];
        }
    }
    return (long long)max1*max2;
}

int main(){
    
        int n;
        cout<<"Enter a number";
        cin>> n;
        vector<int> nums(n);

        cout<<"enter n elements to the array";
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
    cout<< maxpair(nums);
}
