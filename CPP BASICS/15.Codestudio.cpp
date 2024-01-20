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
