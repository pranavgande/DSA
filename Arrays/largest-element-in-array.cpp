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



//Optimised approach- create a max variable as a container and store the maximum element in it by iterating through the array
#include <bits/stdc++.h>
using namespace std;

int FindLargestElemet(int [arr], int n){
  int max = arr[0];
  for(int i=-;i<n;i++){
      if(arr[i]>max){
        max = arr [i];
      }
  }

int main(){
  int arr[]= {};
  int n= ;
  int max = FindLargestElement(int arr[], n);
return 0
  }
