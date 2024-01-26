// sqrt(x)
long long int BinarySearch(int n){
    int s = 0;
    int e = n;
    long long  mid = s + (e-s)/2;
    long long int ans = -1;
    while(s <= e){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        if(square < n){
          ans = mid;
          s = mid + 1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int floorSqrt(int n)
{
    return BinarySearch(n);
}
// Search in a sorted array
int getPivot(int*arr,int n){
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;
  while(s < e){
  if(arr[mid] >= arr[0]){
     s = mid+1;
  }
   else{
       e = mid;
   }
   mid = s + (e-s)/2;
 }
  return s;
} 
int binarySearh(int* arr,int start,int end,int key){
    int s = start;
    int e = end;
    int mid = s + (e-s)/2;
    while(s <= e){
    if(key == arr[mid]){
      return mid;
    }
    else if(key <= arr[mid]){
        e = mid -1;
    }
    else{
        s = mid + 1;
    }
    mid = s+(e-s)/2;
    }
    return -1;
}
int search(int* arr, int n, int key) {
    // Write your code here.
    int pivot = getPivot(arr,n);
    if(key >= arr[pivot] && key <= arr[n-1]){
        return binarySearh(arr,pivot,n-1,key);
    }
    else{
        return binarySearh(arr,0,pivot-1,key);
    }
}