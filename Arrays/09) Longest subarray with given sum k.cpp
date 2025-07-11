/*Example 1:
Input Format: N = 3, k = 5, array[] = {2,3,5}
Result: 2
Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.*/
//brute force approach
#include <bits/stdc++.h>
using namespace std;

int LongestSubarr(vector<int>&a, long long k){
  int n =  sizeof.arr(); //size of array
  int len = 0;
  for(int i = 0;i<n;i++)
    for(int j = i;j<n;j++)
      s+=a[k];
  if(s==k)
    len =  max(len, j-i+1);
return len;
}

int main(){
  vector<int> a ={};
  long long k = //number;
  int len = LongestSubarr(a,k);
  return 0;
}


//better approach - use hashing
#include <bits/stdc++.h>
using namespace std;

int LongestSubarr(vector<int>&a, long long k){
  int n = a.size();

map<long long, int> preSumMap;
long long sum = 0;
int maxlen =0;
for(int i=0;i<n;i++)
  sum+=a[i];

if (sum==k)
  maxlen =  max(maxlen, i+1);

long long rem = sum - k;

if(preSummap.find(rem)!=preSummap.end()
  int len = i-preSummap;
maxlen = max(maxlen, len);

if (preSumMap.find(sum) == preSumMap.end()) {
  preSumMap[sum] = i;
    }
}
