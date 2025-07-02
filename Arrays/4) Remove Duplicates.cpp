/*Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

*/

//Brute Force Approach- use a data structure that does not store duplicates - Hash
// declare the hashmap , iterate through the  array and put all the unique elements in it

#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n) {
  set < int > set;
  for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();
  int j = 0;
  for (int x: set) {
    arr[j++] = x;
  }
  return k;
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}


//optimal-Two pointer approach

#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}

