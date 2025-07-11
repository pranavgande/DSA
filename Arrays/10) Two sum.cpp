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
