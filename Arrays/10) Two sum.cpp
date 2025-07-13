/*Example 1:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
Result: YES (for 1st variant)
       [1, 3] (for 2nd variant)
Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.*/

//brute force - traverse through array, with condition -: arr[i] + arr[j] = target

#include <bits/stdc++.h>
using namespace std;

string twoSum(vector<int> &arr, int target){
  for(int i = 0;i<n;i++)
    for (int j = i+1;j<n;j++)
      if(arr[i]+arr[j]==target) return YES;
  return NO;
}

int main(){
  int n = 5;
  vector<int>= {};
  int target = 12;
  string ans = twoSum(n, arr, target);
  return 0;
}


//better appoach using hashmap- target - arr[i]

  vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp; // maps value -> index
        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            int moreNeeded = target - num;
            if (mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded], i};
            }
            mpp[num] = i;
        }
        return {-1, -1}; 

//optimal- using two pointer approach, two points on two ends of an sorted array
/*If arr[left] + arr[right] > sum, we will decrement the right pointer.
If arr[left] + arr[right] < sum, we will increment the left pointer.
If arr[left] + arr[right] == sum, we will return the result.*/

string twoSum(int n, vector<int> &arr, int target){
       sort(arr.begin(), arr.end());
       int left = 0,right = n-1;
       while(left<right)
              int sum  = arr[left]+arr[right];
              if(sum==target)
                     return YES;
              else if(sum<target) left++;
              else() right --;
       return NO;
}
