/*Find the largest element in the array*/
/* 
Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array. 
*/

//Brute force
//Intuition- sort the array in ascending order, the element in the last index will be the largest element

#include <bits/stdc++.h>
using namespace std;

int sortArr(vector<int> & arr){
  sort(arr.begin(),arr.end());
  return arr[arr.size()-1];
}

int main(){
  vector <int> arr= {0,2,3,1,5}

sortArr(arr);
return 0;
} 
