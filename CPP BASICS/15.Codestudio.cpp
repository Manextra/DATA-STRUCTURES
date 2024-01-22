// find unique element in array
int findUnique(int *arr, int size)
{
  int ans = 0;
  for(int i=0;i<size;i++){
    ans = ans^arr[i];
  }
  return ans;
}
// finding duplicate
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans = 0;
	for(int i=0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }
    for(int i=1;i<arr.size();i++){
        ans = ans ^ i;
    }
    return ans;
}
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int left = 0;
   int mid = 0;
   int right = n-1;
   while(mid <= right){
     switch (arr[mid]) {
     case 0:
       swap(arr[left], arr[mid]);
       left++;
       mid++;
       break;

       case 1:
       mid++;
       break;

       case 2:
       swap(arr[mid],arr[right]);
       right--;
       break;
     }
   }
}
