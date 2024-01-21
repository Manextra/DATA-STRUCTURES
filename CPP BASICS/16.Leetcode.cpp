// 1207 - unique number of occurences
#include<iostream>
#include<vector>
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int size = arr.size();
        sort(arr.begin(),arr.end());
        int i = 0;
        while(i < size){
            int count = 1;
            for(int j=i+1;j<size;j++){
                if(arr[i] == arr[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            ans.push_back(count);
            i = i + count;
        }
        size = ans.size();
        sort(ans.begin(),ans.end());
        for(int i=0;i<size-1 ;i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
        }
        return true;
    }
};
// find duplicates in the array 
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int n : nums){
            n = abs(n);
            if(nums[n-1] > 0) {
                nums[n-1] *= -1;
            }
            else{
                ans.push_back(n);
            }
        }
        return ans;
    }
};