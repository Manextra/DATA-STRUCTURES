// pivot element
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int t_sum = accumulate(nums.begin(),nums.end(),0);
     int l_sum = 0;
     for(int i=0;i<nums.size();i++){
         t_sum -= nums[i];
         if(l_sum == t_sum){
             return i;
         }
         l_sum += nums[i];
     }
     return -1;
     } 
};
// peak index in a mountain array
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int mid = s+ (e-s)/2;
        while(s<e){
        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s+ (e-s)/2;
      }
      return s;
    }
};