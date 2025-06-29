/*
Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
	Second Largest : 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

Example 2:
Input: [1]
Output: Second Smallest : -1
	Second Largest : -1
Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.*/


// brute force approach- arrange all in ascending order then second and second last element are the required numbers (limitation is there should not be duplicate, all numbers should be unique)

#include <bits/stdc++.h>
using namespace std;
void GetElements(int arr, int n){
  if(n=0 || n=1)
    cout << -1 << " " << 1 << endl;
  sort(arr,arr+1);
  cout << "Second smallest" << arr[1];
  cout << "second largest" << arr[n-2];
  

int main(){
  int arr[]= {}; //declare the array
  int n= size(arr[])/size(arr[0]);
  GetElements(arr,n);
  return 0;
}


